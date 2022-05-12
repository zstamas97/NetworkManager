/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_IPTUNNEL_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_IPTUNNEL_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.IPTunnel */

#define NMDBUS_TYPE_DEVICE_IPTUNNEL (nmdbus_device_iptunnel_get_type ())
#define NMDBUS_DEVICE_IPTUNNEL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL, NMDBusDeviceIPTunnel))
#define NMDBUS_IS_DEVICE_IPTUNNEL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL))
#define NMDBUS_DEVICE_IPTUNNEL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL, NMDBusDeviceIPTunnelIface))

struct _NMDBusDeviceIPTunnel;
typedef struct _NMDBusDeviceIPTunnel NMDBusDeviceIPTunnel;
typedef struct _NMDBusDeviceIPTunnelIface NMDBusDeviceIPTunnelIface;

struct _NMDBusDeviceIPTunnelIface
{
  GTypeInterface parent_iface;

  guchar  (*get_encapsulation_limit) (NMDBusDeviceIPTunnel *object);

  guint  (*get_flags) (NMDBusDeviceIPTunnel *object);

  guint  (*get_flow_label) (NMDBusDeviceIPTunnel *object);

  const gchar * (*get_input_key) (NMDBusDeviceIPTunnel *object);

  const gchar * (*get_local) (NMDBusDeviceIPTunnel *object);

  guint  (*get_mode) (NMDBusDeviceIPTunnel *object);

  const gchar * (*get_output_key) (NMDBusDeviceIPTunnel *object);

  const gchar * (*get_parent) (NMDBusDeviceIPTunnel *object);

  gboolean  (*get_path_mtu_discovery) (NMDBusDeviceIPTunnel *object);

  const gchar * (*get_remote) (NMDBusDeviceIPTunnel *object);

  guchar  (*get_tos) (NMDBusDeviceIPTunnel *object);

  guchar  (*get_ttl) (NMDBusDeviceIPTunnel *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceIPTunnel, g_object_unref)
#endif

GType nmdbus_device_iptunnel_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_iptunnel_interface_info (void);
guint nmdbus_device_iptunnel_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
guint nmdbus_device_iptunnel_get_mode (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_mode (NMDBusDeviceIPTunnel *object, guint value);

const gchar *nmdbus_device_iptunnel_get_parent (NMDBusDeviceIPTunnel *object);
gchar *nmdbus_device_iptunnel_dup_parent (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_parent (NMDBusDeviceIPTunnel *object, const gchar *value);

const gchar *nmdbus_device_iptunnel_get_local (NMDBusDeviceIPTunnel *object);
gchar *nmdbus_device_iptunnel_dup_local (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_local (NMDBusDeviceIPTunnel *object, const gchar *value);

const gchar *nmdbus_device_iptunnel_get_remote (NMDBusDeviceIPTunnel *object);
gchar *nmdbus_device_iptunnel_dup_remote (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_remote (NMDBusDeviceIPTunnel *object, const gchar *value);

guchar nmdbus_device_iptunnel_get_ttl (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_ttl (NMDBusDeviceIPTunnel *object, guchar value);

guchar nmdbus_device_iptunnel_get_tos (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_tos (NMDBusDeviceIPTunnel *object, guchar value);

gboolean nmdbus_device_iptunnel_get_path_mtu_discovery (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_path_mtu_discovery (NMDBusDeviceIPTunnel *object, gboolean value);

const gchar *nmdbus_device_iptunnel_get_input_key (NMDBusDeviceIPTunnel *object);
gchar *nmdbus_device_iptunnel_dup_input_key (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_input_key (NMDBusDeviceIPTunnel *object, const gchar *value);

const gchar *nmdbus_device_iptunnel_get_output_key (NMDBusDeviceIPTunnel *object);
gchar *nmdbus_device_iptunnel_dup_output_key (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_output_key (NMDBusDeviceIPTunnel *object, const gchar *value);

guchar nmdbus_device_iptunnel_get_encapsulation_limit (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_encapsulation_limit (NMDBusDeviceIPTunnel *object, guchar value);

guint nmdbus_device_iptunnel_get_flow_label (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_flow_label (NMDBusDeviceIPTunnel *object, guint value);

guint nmdbus_device_iptunnel_get_flags (NMDBusDeviceIPTunnel *object);
void nmdbus_device_iptunnel_set_flags (NMDBusDeviceIPTunnel *object, guint value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY (nmdbus_device_iptunnel_proxy_get_type ())
#define NMDBUS_DEVICE_IPTUNNEL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY, NMDBusDeviceIPTunnelProxy))
#define NMDBUS_DEVICE_IPTUNNEL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY, NMDBusDeviceIPTunnelProxyClass))
#define NMDBUS_DEVICE_IPTUNNEL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY, NMDBusDeviceIPTunnelProxyClass))
#define NMDBUS_IS_DEVICE_IPTUNNEL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY))
#define NMDBUS_IS_DEVICE_IPTUNNEL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_IPTUNNEL_PROXY))

typedef struct _NMDBusDeviceIPTunnelProxy NMDBusDeviceIPTunnelProxy;
typedef struct _NMDBusDeviceIPTunnelProxyClass NMDBusDeviceIPTunnelProxyClass;
typedef struct _NMDBusDeviceIPTunnelProxyPrivate NMDBusDeviceIPTunnelProxyPrivate;

struct _NMDBusDeviceIPTunnelProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceIPTunnelProxyPrivate *priv;
};

struct _NMDBusDeviceIPTunnelProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_iptunnel_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceIPTunnelProxy, g_object_unref)
#endif

void nmdbus_device_iptunnel_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceIPTunnel *nmdbus_device_iptunnel_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceIPTunnel *nmdbus_device_iptunnel_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_iptunnel_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceIPTunnel *nmdbus_device_iptunnel_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceIPTunnel *nmdbus_device_iptunnel_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON (nmdbus_device_iptunnel_skeleton_get_type ())
#define NMDBUS_DEVICE_IPTUNNEL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON, NMDBusDeviceIPTunnelSkeleton))
#define NMDBUS_DEVICE_IPTUNNEL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON, NMDBusDeviceIPTunnelSkeletonClass))
#define NMDBUS_DEVICE_IPTUNNEL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON, NMDBusDeviceIPTunnelSkeletonClass))
#define NMDBUS_IS_DEVICE_IPTUNNEL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON))
#define NMDBUS_IS_DEVICE_IPTUNNEL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_IPTUNNEL_SKELETON))

typedef struct _NMDBusDeviceIPTunnelSkeleton NMDBusDeviceIPTunnelSkeleton;
typedef struct _NMDBusDeviceIPTunnelSkeletonClass NMDBusDeviceIPTunnelSkeletonClass;
typedef struct _NMDBusDeviceIPTunnelSkeletonPrivate NMDBusDeviceIPTunnelSkeletonPrivate;

struct _NMDBusDeviceIPTunnelSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceIPTunnelSkeletonPrivate *priv;
};

struct _NMDBusDeviceIPTunnelSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_iptunnel_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceIPTunnelSkeleton, g_object_unref)
#endif

NMDBusDeviceIPTunnel *nmdbus_device_iptunnel_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_IPTUNNEL_H__ */
