/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_BLUETOOTH_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_BLUETOOTH_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Bluetooth */

#define NMDBUS_TYPE_DEVICE_BLUETOOTH (nmdbus_device_bluetooth_get_type ())
#define NMDBUS_DEVICE_BLUETOOTH(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH, NMDBusDeviceBluetooth))
#define NMDBUS_IS_DEVICE_BLUETOOTH(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH))
#define NMDBUS_DEVICE_BLUETOOTH_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH, NMDBusDeviceBluetoothIface))

struct _NMDBusDeviceBluetooth;
typedef struct _NMDBusDeviceBluetooth NMDBusDeviceBluetooth;
typedef struct _NMDBusDeviceBluetoothIface NMDBusDeviceBluetoothIface;

struct _NMDBusDeviceBluetoothIface
{
  GTypeInterface parent_iface;

  guint  (*get_bt_capabilities) (NMDBusDeviceBluetooth *object);

  const gchar * (*get_hw_address) (NMDBusDeviceBluetooth *object);

  const gchar * (*get_name) (NMDBusDeviceBluetooth *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceBluetooth, g_object_unref)
#endif

GType nmdbus_device_bluetooth_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_bluetooth_interface_info (void);
guint nmdbus_device_bluetooth_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
const gchar *nmdbus_device_bluetooth_get_hw_address (NMDBusDeviceBluetooth *object);
gchar *nmdbus_device_bluetooth_dup_hw_address (NMDBusDeviceBluetooth *object);
void nmdbus_device_bluetooth_set_hw_address (NMDBusDeviceBluetooth *object, const gchar *value);

const gchar *nmdbus_device_bluetooth_get_name (NMDBusDeviceBluetooth *object);
gchar *nmdbus_device_bluetooth_dup_name (NMDBusDeviceBluetooth *object);
void nmdbus_device_bluetooth_set_name (NMDBusDeviceBluetooth *object, const gchar *value);

guint nmdbus_device_bluetooth_get_bt_capabilities (NMDBusDeviceBluetooth *object);
void nmdbus_device_bluetooth_set_bt_capabilities (NMDBusDeviceBluetooth *object, guint value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY (nmdbus_device_bluetooth_proxy_get_type ())
#define NMDBUS_DEVICE_BLUETOOTH_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY, NMDBusDeviceBluetoothProxy))
#define NMDBUS_DEVICE_BLUETOOTH_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY, NMDBusDeviceBluetoothProxyClass))
#define NMDBUS_DEVICE_BLUETOOTH_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY, NMDBusDeviceBluetoothProxyClass))
#define NMDBUS_IS_DEVICE_BLUETOOTH_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY))
#define NMDBUS_IS_DEVICE_BLUETOOTH_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_BLUETOOTH_PROXY))

typedef struct _NMDBusDeviceBluetoothProxy NMDBusDeviceBluetoothProxy;
typedef struct _NMDBusDeviceBluetoothProxyClass NMDBusDeviceBluetoothProxyClass;
typedef struct _NMDBusDeviceBluetoothProxyPrivate NMDBusDeviceBluetoothProxyPrivate;

struct _NMDBusDeviceBluetoothProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceBluetoothProxyPrivate *priv;
};

struct _NMDBusDeviceBluetoothProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_bluetooth_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceBluetoothProxy, g_object_unref)
#endif

void nmdbus_device_bluetooth_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceBluetooth *nmdbus_device_bluetooth_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceBluetooth *nmdbus_device_bluetooth_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_bluetooth_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceBluetooth *nmdbus_device_bluetooth_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceBluetooth *nmdbus_device_bluetooth_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON (nmdbus_device_bluetooth_skeleton_get_type ())
#define NMDBUS_DEVICE_BLUETOOTH_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON, NMDBusDeviceBluetoothSkeleton))
#define NMDBUS_DEVICE_BLUETOOTH_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON, NMDBusDeviceBluetoothSkeletonClass))
#define NMDBUS_DEVICE_BLUETOOTH_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON, NMDBusDeviceBluetoothSkeletonClass))
#define NMDBUS_IS_DEVICE_BLUETOOTH_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON))
#define NMDBUS_IS_DEVICE_BLUETOOTH_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_BLUETOOTH_SKELETON))

typedef struct _NMDBusDeviceBluetoothSkeleton NMDBusDeviceBluetoothSkeleton;
typedef struct _NMDBusDeviceBluetoothSkeletonClass NMDBusDeviceBluetoothSkeletonClass;
typedef struct _NMDBusDeviceBluetoothSkeletonPrivate NMDBusDeviceBluetoothSkeletonPrivate;

struct _NMDBusDeviceBluetoothSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceBluetoothSkeletonPrivate *priv;
};

struct _NMDBusDeviceBluetoothSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_bluetooth_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceBluetoothSkeleton, g_object_unref)
#endif

NMDBusDeviceBluetooth *nmdbus_device_bluetooth_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_BLUETOOTH_H__ */
