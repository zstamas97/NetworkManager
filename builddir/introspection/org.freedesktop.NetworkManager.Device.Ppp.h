/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_PPP_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_PPP_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Ppp */

#define NMDBUS_TYPE_DEVICE_PPP (nmdbus_device_ppp_get_type ())
#define NMDBUS_DEVICE_PPP(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_PPP, NMDBusDevicePpp))
#define NMDBUS_IS_DEVICE_PPP(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_PPP))
#define NMDBUS_DEVICE_PPP_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_PPP, NMDBusDevicePppIface))

struct _NMDBusDevicePpp;
typedef struct _NMDBusDevicePpp NMDBusDevicePpp;
typedef struct _NMDBusDevicePppIface NMDBusDevicePppIface;

struct _NMDBusDevicePppIface
{
  GTypeInterface parent_iface;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDevicePpp, g_object_unref)
#endif

GType nmdbus_device_ppp_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_ppp_interface_info (void);
guint nmdbus_device_ppp_override_properties (GObjectClass *klass, guint property_id_begin);


/* ---- */

#define NMDBUS_TYPE_DEVICE_PPP_PROXY (nmdbus_device_ppp_proxy_get_type ())
#define NMDBUS_DEVICE_PPP_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_PPP_PROXY, NMDBusDevicePppProxy))
#define NMDBUS_DEVICE_PPP_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_PPP_PROXY, NMDBusDevicePppProxyClass))
#define NMDBUS_DEVICE_PPP_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_PPP_PROXY, NMDBusDevicePppProxyClass))
#define NMDBUS_IS_DEVICE_PPP_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_PPP_PROXY))
#define NMDBUS_IS_DEVICE_PPP_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_PPP_PROXY))

typedef struct _NMDBusDevicePppProxy NMDBusDevicePppProxy;
typedef struct _NMDBusDevicePppProxyClass NMDBusDevicePppProxyClass;
typedef struct _NMDBusDevicePppProxyPrivate NMDBusDevicePppProxyPrivate;

struct _NMDBusDevicePppProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDevicePppProxyPrivate *priv;
};

struct _NMDBusDevicePppProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_ppp_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDevicePppProxy, g_object_unref)
#endif

void nmdbus_device_ppp_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDevicePpp *nmdbus_device_ppp_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDevicePpp *nmdbus_device_ppp_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_ppp_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDevicePpp *nmdbus_device_ppp_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDevicePpp *nmdbus_device_ppp_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_PPP_SKELETON (nmdbus_device_ppp_skeleton_get_type ())
#define NMDBUS_DEVICE_PPP_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_PPP_SKELETON, NMDBusDevicePppSkeleton))
#define NMDBUS_DEVICE_PPP_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_PPP_SKELETON, NMDBusDevicePppSkeletonClass))
#define NMDBUS_DEVICE_PPP_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_PPP_SKELETON, NMDBusDevicePppSkeletonClass))
#define NMDBUS_IS_DEVICE_PPP_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_PPP_SKELETON))
#define NMDBUS_IS_DEVICE_PPP_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_PPP_SKELETON))

typedef struct _NMDBusDevicePppSkeleton NMDBusDevicePppSkeleton;
typedef struct _NMDBusDevicePppSkeletonClass NMDBusDevicePppSkeletonClass;
typedef struct _NMDBusDevicePppSkeletonPrivate NMDBusDevicePppSkeletonPrivate;

struct _NMDBusDevicePppSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDevicePppSkeletonPrivate *priv;
};

struct _NMDBusDevicePppSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_ppp_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDevicePppSkeleton, g_object_unref)
#endif

NMDBusDevicePpp *nmdbus_device_ppp_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_PPP_H__ */
