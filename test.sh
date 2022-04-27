#!/bin/bash

set -x
set -e

die() {
    printf "%s\n" "$@"
    exit 1
}

do_cleanup() {
    if [ -f /tmp/test1-dnsmasq.pid ]; then
        pkill -F /tmp/test1-dnsmasq.pid
        rm -f /tmp/test1-dnsmasq.pid
    fi
    ip netns del test1 &>/dev/null || :
    nmcli connection delete t-br0 t-v t-net1 2>/dev/null || :

    nm-env-prepare.sh cleanup
}

do_setup() {
    nm-env-prepare.sh setup

    ip netns add test1
    ip -netns test1 link set lo up
    ip -netns test1 link add name v type veth peer w
    ip -netns test1 link set v up
    ip -netns test1 link set w up

    for i in {100..150}; do
        ip -netns test1 addr add 192.168.121.$i/23 dev w
    done
    ip -netns test1 link set v netns $$

    nmcli connection add type ethernet autoconnect no con-name t-v slave-type bridge master br0 ifname v
    nmcli connection add type ethernet autoconnect no con-name t-net1 slave-type bridge master br0 ifname net1

    nmcli connection add type bridge autoconnect no con-name t-br0 ipv6.method disabled ipv4.method auto ifname br0 stp no \
        ipv4.dad-timeout 2000

    nmcli connection up t-v
    nmcli connection up t-net1
}

case "$1" in
    ""|setup)
        do_setup
        ;;
    cleanup)
        do_cleanup
        ;;
    *)
        die "Invalid command"
        ;;
esac
