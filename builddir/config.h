/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to path of dhclient binary */
#define DHCLIENT_PATH "/usr/sbin/dhclient"

/* Define to path of dhcpcanon binary */
#define DHCPCANON_PATH "/usr/sbin/dhcpcanon"

/* Define to path of dhcpcd binary */
#define DHCPCD_PATH "/usr/sbin/dhcpcd"

/* Define to path of dnsmasq binary */
#define DNSMASQ_PATH "/usr/sbin/dnsmasq"

/* Define to path of unbound dnssec-trigger-script */
#define DNSSEC_TRIGGER_PATH "/usr/local/libexec/dnssec-trigger-script"

/* Gettext package */
#define GETTEXT_PACKAGE "NetworkManager"

/* Define to 1 if you have the declaration of `memfd_create', and to 0 if you
   don't. */
#define HAVE_DECL_MEMFD_CREATE 0

/* Define to 1 if you have the declaration of `reallocarray', and to 0 if
   you don't. */
#define HAVE_DECL_REALLOCARRAY 1

/* Define to 1 if you have the declaration of `explicit_bzero', and to 0 if
   you don't. */
#define HAVE_DECL_EXPLICIT_BZERO 1

/* has getrandom */
#define HAVE_GETRANDOM 1

/* Define if you have libaudit support */
#define HAVE_LIBAUDIT 1

/* Define to 1 if libsystemd is available */
#define HAVE_LIBSYSTEMD 1

/* Define to 1 if you have the `secure_getenv' function. */
#define HAVE_SECURE_GETENV

/* Define if you have SELinux support */
#define HAVE_SELINUX 1

/* Define to 1 if you have the <sys/auxv.h> header file. */
#define HAVE_SYS_AUXV_H 1

/* Define if you have Linux Wireless Extensions support */
#define HAVE_WEXT 1

/* Define to 1 if you have the `__secure_getenv' function. */
#undef HAVE___SECURE_GETENV

/* Enable Gentoo hostname persist method */
#undef HOSTNAME_PERSIST_GENTOO

/* Enable Slackware hostname persist method */
#undef HOSTNAME_PERSIST_SLACKWARE

/* Enable SuSE hostname persist method */
#undef HOSTNAME_PERSIST_SUSE

/* Define to path of iptables binary */
#define IPTABLES_PATH "/usr/sbin/iptables"

/* Define to path of nft binary */
#define NFT_PATH "/usr/sbin/nft"

//* Define to path to the Jansson shared library */
/* #undef JANSSON_SONAME */

/* Define to path of the kernel firmware directory */
#define KERNEL_FIRMWARE_DIR "/lib/firmware"

/* Mobile Broadband Service Provider Information Database location */
#define MOBILE_BROADBAND_PROVIDER_INFO_DATABASE "/usr/share/mobile-broadband-provider-info/serviceproviders.xml"

/* Path to netconfig */
/* #undef NETCONFIG_PATH */

/* Build with ifcfg-rh settings plugin */
#define WITH_CONFIG_PLUGIN_IFCFG_RH 0

/* Build with ifupdown settings plugin */
#define WITH_CONFIG_PLUGIN_IFUPDOWN 1

/* The default value of the logging.audit configuration option */
#define NM_CONFIG_DEFAULT_LOGGING_AUDIT "true"

/* Default configuration option for logging.backend */
#define NM_CONFIG_DEFAULT_LOGGING_BACKEND "journal"

/* The default value of the auth-polkit configuration option */
#define NM_CONFIG_DEFAULT_MAIN_AUTH_POLKIT "true"

/* Default configuration option for main.dhcp setting */
#define NM_CONFIG_DEFAULT_MAIN_DHCP "internal"

/* Default configuration option for main.plugins setting */
#define NM_CONFIG_DEFAULT_MAIN_PLUGINS ""

/* Default value for main.rc-manager setting */
#define NM_CONFIG_DEFAULT_MAIN_RC_MANAGER "auto"

/* Default configuration option for wifi.backend */
#define NM_CONFIG_DEFAULT_WIFI_BACKEND "wpa_supplicant"

/* Define the distribution version string */
#define NM_DIST_VERSION "1.36.4"

/* Define if more asserts are enabled */
#define NM_MORE_ASSERTS 0

/* Define if more debug logging is enabled */
#define NM_MORE_LOGGING 1

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "NetworkManager 1.36.4"

/* path to polkit-agent-helper-1 binary */
#define POLKIT_AGENT_HELPER_1_PATH "/usr/lib/policykit-1/polkit-agent-helper-1"

/* Path to resolvconf */
/* #undef RESOLVCONF_PATH */

/* Define to 1 if ConsoleKit is available */
#define SESSION_TRACKING_CONSOLEKIT 1

/* Define to 1 if libelogin is available */
#define SESSION_TRACKING_ELOGIND 0

/* Define to 1 if libsystemd-login is available */
#define SESSION_TRACKING_SYSTEMD 1

/* The size of `pid_t', as computed by sizeof. */
#define SIZEOF_PID_T 4

/* The size of `uid_t', as computed by sizeof. */
#define SIZEOF_UID_T 4

/* The size of `gid_t', as computed by sizeof. */
#define SIZEOF_GID_T 4

/* The size of `dev_t', as computed by sizeof. */
#define SIZEOF_DEV_T 8

/* The size of `ino_t', as computed by sizeof. */
#define SIZEOF_INO_T 8

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `rlim_t', as computed by sizeof. */
#define SIZEOF_RLIM_T 8

/* Define to 1 to use ConsoleKit2 suspend api */
/* #undef SUSPEND_RESUME_CONSOLEKIT */

/* Define to 1 to use elogind suspend api */
/* #undef SUSPEND_RESUME_ELOGIND */

/* Define to 1 to use systemd suspend api */
#define SUSPEND_RESUME_SYSTEMD

/* Define to 1 to use UPower suspend api */
/* #undef SUSPEND_RESUME_UPOWER */

/* Define to 1 if libsystemd-journald is available */
#define SYSTEMD_JOURNAL 1

/* Define to path to system CA certificates */
#define SYSTEM_CA_PATH "/etc/ssl/certs"

/* Define python path for test binary */
#define TEST_NM_PYTHON "/usr/bin/python3"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif

/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif

/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif

/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif

/* sys/random.h is usable */
#define USE_SYS_RANDOM_H 1

/* Version number of package */
#define VERSION "1.36.4"

/* Define if you have Bluez 5 libraries */
#define WITH_BLUEZ5_DUN 0

/* Define if you want connectivity checking support */
#define WITH_CONCHECK 1

/* Define if you have dhclient */
#define WITH_DHCLIENT 1

/* Define if you have dhcpcanon */
#define WITH_DHCPCANON 1

/* Define if you have dhcpcd */
#define WITH_DHCPCD 1

/* Define if JANSSON is enabled */
#define WITH_JANSSON 0

/* Define if you have libpsl */
#define WITH_LIBPSL 1

/* Define if you have oFono support (experimental) */
#define WITH_OFONO 0

/* Whether we build with OVS plugin */
#define WITH_OPENVSWITCH 0

/* Define if you have PPP support */
#define WITH_PPP 0

/* Define to path of pppd binary */
/* #undef PPPD_PATH */

/* Define if you have iwd support */
#define WITH_IWD 0

/* Define if NetworkManager uses a custom zone for shared mode */
#define WITH_FIREWALLD_ZONE 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define whether the compiler support gcc __auto_type */
#define _NM_CC_SUPPORT_AUTO_TYPE 1

/* Define whether the compiler supports C11 _Generic() */
#define _NM_CC_SUPPORT_GENERIC 1

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

#define HAVE_PIDFD_OPEN 0
#define HAVE_PIDFD_SEND_SIGNAL 0
#define HAVE_RT_SIGQUEUEINFO 0

/* Define to 1 if you want to use -ledit, otherwise 0 for default -lreadline. */
#define HAVE_EDITLINE_READLINE 0

/* Define to 1 if you have history support from -lreadline. */
#define HAVE_READLINE_HISTORY 1

