/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_WIRED_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_WIRED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Wired */

#define NMDBUS_TYPE_DEVICE_ETHERNET (nmdbus_device_ethernet_get_type ())
#define NMDBUS_DEVICE_ETHERNET(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_ETHERNET, NMDBusDeviceEthernet))
#define NMDBUS_IS_DEVICE_ETHERNET(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_ETHERNET))
#define NMDBUS_DEVICE_ETHERNET_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_ETHERNET, NMDBusDeviceEthernetIface))

struct _NMDBusDeviceEthernet;
typedef struct _NMDBusDeviceEthernet NMDBusDeviceEthernet;
typedef struct _NMDBusDeviceEthernetIface NMDBusDeviceEthernetIface;

struct _NMDBusDeviceEthernetIface
{
  GTypeInterface parent_iface;

  gboolean  (*get_carrier) (NMDBusDeviceEthernet *object);

  const gchar * (*get_hw_address) (NMDBusDeviceEthernet *object);

  const gchar * (*get_perm_hw_address) (NMDBusDeviceEthernet *object);

  const gchar *const * (*get_s390_subchannels) (NMDBusDeviceEthernet *object);

  guint  (*get_speed) (NMDBusDeviceEthernet *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceEthernet, g_object_unref)
#endif

GType nmdbus_device_ethernet_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_ethernet_interface_info (void);
guint nmdbus_device_ethernet_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
const gchar *nmdbus_device_ethernet_get_hw_address (NMDBusDeviceEthernet *object);
gchar *nmdbus_device_ethernet_dup_hw_address (NMDBusDeviceEthernet *object);
void nmdbus_device_ethernet_set_hw_address (NMDBusDeviceEthernet *object, const gchar *value);

const gchar *nmdbus_device_ethernet_get_perm_hw_address (NMDBusDeviceEthernet *object);
gchar *nmdbus_device_ethernet_dup_perm_hw_address (NMDBusDeviceEthernet *object);
void nmdbus_device_ethernet_set_perm_hw_address (NMDBusDeviceEthernet *object, const gchar *value);

guint nmdbus_device_ethernet_get_speed (NMDBusDeviceEthernet *object);
void nmdbus_device_ethernet_set_speed (NMDBusDeviceEthernet *object, guint value);

const gchar *const *nmdbus_device_ethernet_get_s390_subchannels (NMDBusDeviceEthernet *object);
gchar **nmdbus_device_ethernet_dup_s390_subchannels (NMDBusDeviceEthernet *object);
void nmdbus_device_ethernet_set_s390_subchannels (NMDBusDeviceEthernet *object, const gchar *const *value);

gboolean nmdbus_device_ethernet_get_carrier (NMDBusDeviceEthernet *object);
void nmdbus_device_ethernet_set_carrier (NMDBusDeviceEthernet *object, gboolean value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_ETHERNET_PROXY (nmdbus_device_ethernet_proxy_get_type ())
#define NMDBUS_DEVICE_ETHERNET_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_ETHERNET_PROXY, NMDBusDeviceEthernetProxy))
#define NMDBUS_DEVICE_ETHERNET_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_ETHERNET_PROXY, NMDBusDeviceEthernetProxyClass))
#define NMDBUS_DEVICE_ETHERNET_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_ETHERNET_PROXY, NMDBusDeviceEthernetProxyClass))
#define NMDBUS_IS_DEVICE_ETHERNET_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_ETHERNET_PROXY))
#define NMDBUS_IS_DEVICE_ETHERNET_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_ETHERNET_PROXY))

typedef struct _NMDBusDeviceEthernetProxy NMDBusDeviceEthernetProxy;
typedef struct _NMDBusDeviceEthernetProxyClass NMDBusDeviceEthernetProxyClass;
typedef struct _NMDBusDeviceEthernetProxyPrivate NMDBusDeviceEthernetProxyPrivate;

struct _NMDBusDeviceEthernetProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceEthernetProxyPrivate *priv;
};

struct _NMDBusDeviceEthernetProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_ethernet_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceEthernetProxy, g_object_unref)
#endif

void nmdbus_device_ethernet_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceEthernet *nmdbus_device_ethernet_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceEthernet *nmdbus_device_ethernet_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_ethernet_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceEthernet *nmdbus_device_ethernet_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceEthernet *nmdbus_device_ethernet_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON (nmdbus_device_ethernet_skeleton_get_type ())
#define NMDBUS_DEVICE_ETHERNET_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON, NMDBusDeviceEthernetSkeleton))
#define NMDBUS_DEVICE_ETHERNET_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON, NMDBusDeviceEthernetSkeletonClass))
#define NMDBUS_DEVICE_ETHERNET_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON, NMDBusDeviceEthernetSkeletonClass))
#define NMDBUS_IS_DEVICE_ETHERNET_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON))
#define NMDBUS_IS_DEVICE_ETHERNET_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_ETHERNET_SKELETON))

typedef struct _NMDBusDeviceEthernetSkeleton NMDBusDeviceEthernetSkeleton;
typedef struct _NMDBusDeviceEthernetSkeletonClass NMDBusDeviceEthernetSkeletonClass;
typedef struct _NMDBusDeviceEthernetSkeletonPrivate NMDBusDeviceEthernetSkeletonPrivate;

struct _NMDBusDeviceEthernetSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceEthernetSkeletonPrivate *priv;
};

struct _NMDBusDeviceEthernetSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_ethernet_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceEthernetSkeleton, g_object_unref)
#endif

NMDBusDeviceEthernet *nmdbus_device_ethernet_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_WIRED_H__ */
