#!/bin/bash

set -e

die() {
    printf '%s\n' "$*"
    exit 1
}

do_cleanup() {
    local IDX="$1"
    local NAME_PREFIX="${2:-net}"
    local PEER_PREFIX="${3:-d_}"
    local NETNS_PREFIX="${4:-tt}"

    logger --id "nm-env-prepare-$IDX" "cleanup start # $@"

    pkill -F "/tmp/nm-dnsmasq-$PEER_PREFIX$IDX.pid" dnsmasq &>/dev/null || :
    rm -rf "/tmp/nm-dnsmasq-$PEER_PREFIX$IDX.pid"

    pkill -F "/tmp/nm-radvd-$PEER_PREFIX$IDX.pid" radvd &>/dev/null || :
    rm -rf "/tmp/nm-radvd-$PEER_PREFIX$IDX.pid"

    pkill -F "/tmp/nm-pppoe-$PEER_PREFIX$IDX.pid" pppoe-server &>/dev/null || :
    rm -rf "/tmp/nm-pppoe-$PEER_PREFIX$IDX.pid"
    rm -rf "/tmp/nm-pppoe-allip-$PEER_PREFIX$IDX"

    rm -rf "/tmp/nm-radvd-$PEER_PREFIX$IDX.conf"

    ip -netns "$NETNS_PREFIX$IDX" link del "$PEER_PREFIX$IDX" &>/dev/null || :

    ip netns del "$NETNS_PREFIX$IDX" &>/dev/null || :

    logger --id "nm-env-prepare-$IDX" "cleanup complete # $@"
}

do_setup() {
    local IDX="$1"
    local NAME_PREFIX="${2:-net}"
    local PEER_PREFIX="${3:-d_}"
    local NETNS_PREFIX="${4:-tt}"

    logger --id "nm-env-prepare-$IDX" "setup start # $@"

    ip netns add "$NETNS_PREFIX$IDX"
    ip -netns "$NETNS_PREFIX$IDX" link set lo up

    ip -netns "$NETNS_PREFIX$IDX" link add "$NAME_PREFIX$IDX" type veth peer "$PEER_PREFIX$IDX"
    ip -netns "$NETNS_PREFIX$IDX" link set "$PEER_PREFIX$IDX" up

    ip -netns "$NETNS_PREFIX$IDX" addr add "192.168.$((120 + IDX)).1/23" dev "$PEER_PREFIX$IDX"
    ip -netns "$NETNS_PREFIX$IDX" addr add "192:168:$((120 + IDX))::1/64" dev "$PEER_PREFIX$IDX"

    # PPPoE inside the rootless container is not actually working, because
    # /dev/ppp is not accessible. Still start it, so that we at least can
    # test how far it goes...
    echo "192.168.$((120 + $IDX)).180-200" > "/tmp/nm-pppoe-allip-$PEER_PREFIX$IDX"
    ip netns exec "$NETNS_PREFIX$IDX" \
        pppoe-server \
            -X "/tmp/nm-pppoe-$PEER_PREFIX$IDX.pid" \
            -S isp \
            -C isp \
            -L "192.168.$((120 + IDX)).1" \
            -p "/tmp/nm-pppoe-allip-$PEER_PREFIX$IDX" \
            -I "$PEER_PREFIX$IDX" \
            &

    ip netns exec "$NETNS_PREFIX$IDX" \
        dnsmasq \
            --conf-file=/dev/null \
            --pid-file="/tmp/nm-dnsmasq-$PEER_PREFIX$IDX.pid" \
            --no-hosts \
            --keep-in-foreground \
            --bind-interfaces \
            --log-debug \
            --log-queries \
            --log-dhcp \
            --except-interface=lo \
            --clear-on-reload \
            --listen-address="192.168.$((120 + $IDX)).1" \
            --dhcp-range="192.168.$((120 + $IDX)).100,192.168.$((120 + $IDX)).150" \
            --no-ping \
            &

    cat <<EOF > "/tmp/nm-radvd-$PEER_PREFIX$IDX.conf"
interface $PEER_PREFIX$IDX
{
        AdvSendAdvert on;
        prefix 192:168:$((120 + IDX))::/64
        {
                AdvOnLink on;
        };

};
EOF
    ip netns exec "$NETNS_PREFIX$IDX" \
        radvd \
            --config "/tmp/nm-radvd-$PEER_PREFIX$IDX.conf" \
            --pidfile "/tmp/nm-radvd-$PEER_PREFIX$IDX.pid" \
            --logmethod syslog \
            -d 5 \
            &

    ip -netns ""$NETNS_PREFIX$IDX"" link set "$NAME_PREFIX$IDX" netns $$

    logger --id "nm-env-prepare-$IDX" "setup complete: netns=$NETNS_PREFIX$IDX, iface=$NAME_PREFIX$IDX, peer=$PEER_PREFIX$IDX # $@"
}

do_redo() {
    do_cleanup "$@"
    do_setup "$@"
}

do_one_time_setup() {
    if [ ! -d /tmp/sys2 ]; then
        # `ip -netns t exec ...` will try to mount sysfs. But kernel rejects that in
        # the container, unless a writable sysfs is already mounted. Due to --priviledged,
        # we have /sys mounted rw, however, ip will first unmount /sys before trying to
        # remount it. We thus need it mounted as rw one additional time.
        #
        # Let's do this setup step once, and never clean it up.
        # https://github.com/containers/podman/issues/11887#issuecomment-938706628
        mkdir /tmp/sys2
        mount -t sysfs --make-private /tmp/sys2
    fi
}

###############################################################################

# We do this one-time-setup always when the script runs, and never clean it
# up.
do_one_time_setup


IDX=1
NAME_PREFIX=net
PEER_PREFIX=
CMD=redo
for (( i=1 ; i<="$#" ; )) ; do
    c="${@:$i:1}"
    i=$((i+1))
    case "$c" in
        redo|setup|cleanup)
            CMD="$c"
            ;;
        --prefix|-p)
            NAME_PREFIX="${@:$i:1}"
            test -n "$NAME_PREFIX" || die "missing argument to --prefix"
            i=$((i+1))
            ;;
        --peer-prefix)
            PEER_PREFIX="${@:$i:1}"
            test -n "$PEER_PREFIX" || die "missing argument to --peer-prefix"
            i=$((i+1))
            ;;
        --idx|-i)
            test $i -le "$#" || die "missing argument to --idx"
            IDX="${@:$i:1}"
            i=$((i+1))
            ;;
        *)
            die "invalid argument"
            ;;
    esac
done

if [ -z "$PEER_PREFIX" ]; then
    if [ "$NAME_PREFIX" = net ]; then
        PEER_PREFIX=d_
    else
        PEER_PREFIX="d_${NAME_PREFIX}_"
    fi
fi

do_$CMD "$IDX" "$NAME_PREFIX" "$PEER_PREFIX"
