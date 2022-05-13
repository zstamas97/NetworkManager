/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_CONNECTION_ACTIVE_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_CONNECTION_ACTIVE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Connection.Active */

#define NMDBUS_TYPE_ACTIVE_CONNECTION (nmdbus_active_connection_get_type ())
#define NMDBUS_ACTIVE_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_ACTIVE_CONNECTION, NMDBusActiveConnection))
#define NMDBUS_IS_ACTIVE_CONNECTION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_ACTIVE_CONNECTION))
#define NMDBUS_ACTIVE_CONNECTION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_ACTIVE_CONNECTION, NMDBusActiveConnectionIface))

struct _NMDBusActiveConnection;
typedef struct _NMDBusActiveConnection NMDBusActiveConnection;
typedef struct _NMDBusActiveConnectionIface NMDBusActiveConnectionIface;

struct _NMDBusActiveConnectionIface
{
  GTypeInterface parent_iface;


  const gchar * (*get_connection) (NMDBusActiveConnection *object);

  gboolean  (*get_default) (NMDBusActiveConnection *object);

  gboolean  (*get_default6) (NMDBusActiveConnection *object);

  const gchar *const * (*get_devices) (NMDBusActiveConnection *object);

  const gchar * (*get_dhcp4_config) (NMDBusActiveConnection *object);

  const gchar * (*get_dhcp6_config) (NMDBusActiveConnection *object);

  const gchar * (*get_id) (NMDBusActiveConnection *object);

  const gchar * (*get_ip4_config) (NMDBusActiveConnection *object);

  const gchar * (*get_ip6_config) (NMDBusActiveConnection *object);

  const gchar * (*get_master) (NMDBusActiveConnection *object);

  const gchar * (*get_specific_object) (NMDBusActiveConnection *object);

  guint  (*get_state) (NMDBusActiveConnection *object);

  guint  (*get_state_flags) (NMDBusActiveConnection *object);

  const gchar * (*get_type_) (NMDBusActiveConnection *object);

  const gchar * (*get_uuid) (NMDBusActiveConnection *object);

  gboolean  (*get_vpn) (NMDBusActiveConnection *object);

  void (*state_changed) (
    NMDBusActiveConnection *object,
    guint arg_state,
    guint arg_reason);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusActiveConnection, g_object_unref)
#endif

GType nmdbus_active_connection_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_active_connection_interface_info (void);
guint nmdbus_active_connection_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus signal emissions functions: */
void nmdbus_active_connection_emit_state_changed (
    NMDBusActiveConnection *object,
    guint arg_state,
    guint arg_reason);



/* D-Bus property accessors: */
const gchar *nmdbus_active_connection_get_connection (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_connection (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_connection (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_specific_object (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_specific_object (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_specific_object (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_id (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_id (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_id (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_uuid (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_uuid (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_uuid (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_type_ (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_type_ (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_type_ (NMDBusActiveConnection *object, const gchar *value);

const gchar *const *nmdbus_active_connection_get_devices (NMDBusActiveConnection *object);
gchar **nmdbus_active_connection_dup_devices (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_devices (NMDBusActiveConnection *object, const gchar *const *value);

guint nmdbus_active_connection_get_state (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_state (NMDBusActiveConnection *object, guint value);

guint nmdbus_active_connection_get_state_flags (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_state_flags (NMDBusActiveConnection *object, guint value);

gboolean nmdbus_active_connection_get_default (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_default (NMDBusActiveConnection *object, gboolean value);

const gchar *nmdbus_active_connection_get_ip4_config (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_ip4_config (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_ip4_config (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_dhcp4_config (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_dhcp4_config (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_dhcp4_config (NMDBusActiveConnection *object, const gchar *value);

gboolean nmdbus_active_connection_get_default6 (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_default6 (NMDBusActiveConnection *object, gboolean value);

const gchar *nmdbus_active_connection_get_ip6_config (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_ip6_config (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_ip6_config (NMDBusActiveConnection *object, const gchar *value);

const gchar *nmdbus_active_connection_get_dhcp6_config (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_dhcp6_config (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_dhcp6_config (NMDBusActiveConnection *object, const gchar *value);

gboolean nmdbus_active_connection_get_vpn (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_vpn (NMDBusActiveConnection *object, gboolean value);

const gchar *nmdbus_active_connection_get_master (NMDBusActiveConnection *object);
gchar *nmdbus_active_connection_dup_master (NMDBusActiveConnection *object);
void nmdbus_active_connection_set_master (NMDBusActiveConnection *object, const gchar *value);


/* ---- */

#define NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY (nmdbus_active_connection_proxy_get_type ())
#define NMDBUS_ACTIVE_CONNECTION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY, NMDBusActiveConnectionProxy))
#define NMDBUS_ACTIVE_CONNECTION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY, NMDBusActiveConnectionProxyClass))
#define NMDBUS_ACTIVE_CONNECTION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY, NMDBusActiveConnectionProxyClass))
#define NMDBUS_IS_ACTIVE_CONNECTION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY))
#define NMDBUS_IS_ACTIVE_CONNECTION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_ACTIVE_CONNECTION_PROXY))

typedef struct _NMDBusActiveConnectionProxy NMDBusActiveConnectionProxy;
typedef struct _NMDBusActiveConnectionProxyClass NMDBusActiveConnectionProxyClass;
typedef struct _NMDBusActiveConnectionProxyPrivate NMDBusActiveConnectionProxyPrivate;

struct _NMDBusActiveConnectionProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusActiveConnectionProxyPrivate *priv;
};

struct _NMDBusActiveConnectionProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_active_connection_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusActiveConnectionProxy, g_object_unref)
#endif

void nmdbus_active_connection_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusActiveConnection *nmdbus_active_connection_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusActiveConnection *nmdbus_active_connection_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_active_connection_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusActiveConnection *nmdbus_active_connection_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusActiveConnection *nmdbus_active_connection_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON (nmdbus_active_connection_skeleton_get_type ())
#define NMDBUS_ACTIVE_CONNECTION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON, NMDBusActiveConnectionSkeleton))
#define NMDBUS_ACTIVE_CONNECTION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON, NMDBusActiveConnectionSkeletonClass))
#define NMDBUS_ACTIVE_CONNECTION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON, NMDBusActiveConnectionSkeletonClass))
#define NMDBUS_IS_ACTIVE_CONNECTION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON))
#define NMDBUS_IS_ACTIVE_CONNECTION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_ACTIVE_CONNECTION_SKELETON))

typedef struct _NMDBusActiveConnectionSkeleton NMDBusActiveConnectionSkeleton;
typedef struct _NMDBusActiveConnectionSkeletonClass NMDBusActiveConnectionSkeletonClass;
typedef struct _NMDBusActiveConnectionSkeletonPrivate NMDBusActiveConnectionSkeletonPrivate;

struct _NMDBusActiveConnectionSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusActiveConnectionSkeletonPrivate *priv;
};

struct _NMDBusActiveConnectionSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_active_connection_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusActiveConnectionSkeleton, g_object_unref)
#endif

NMDBusActiveConnection *nmdbus_active_connection_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_CONNECTION_ACTIVE_H__ */