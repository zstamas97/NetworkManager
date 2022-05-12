/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_DUMMY_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_DUMMY_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Dummy */

#define NMDBUS_TYPE_DEVICE_DUMMY (nmdbus_device_dummy_get_type ())
#define NMDBUS_DEVICE_DUMMY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_DUMMY, NMDBusDeviceDummy))
#define NMDBUS_IS_DEVICE_DUMMY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_DUMMY))
#define NMDBUS_DEVICE_DUMMY_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_DUMMY, NMDBusDeviceDummyIface))

struct _NMDBusDeviceDummy;
typedef struct _NMDBusDeviceDummy NMDBusDeviceDummy;
typedef struct _NMDBusDeviceDummyIface NMDBusDeviceDummyIface;

struct _NMDBusDeviceDummyIface
{
  GTypeInterface parent_iface;

  const gchar * (*get_hw_address) (NMDBusDeviceDummy *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceDummy, g_object_unref)
#endif

GType nmdbus_device_dummy_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_dummy_interface_info (void);
guint nmdbus_device_dummy_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
const gchar *nmdbus_device_dummy_get_hw_address (NMDBusDeviceDummy *object);
gchar *nmdbus_device_dummy_dup_hw_address (NMDBusDeviceDummy *object);
void nmdbus_device_dummy_set_hw_address (NMDBusDeviceDummy *object, const gchar *value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_DUMMY_PROXY (nmdbus_device_dummy_proxy_get_type ())
#define NMDBUS_DEVICE_DUMMY_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_DUMMY_PROXY, NMDBusDeviceDummyProxy))
#define NMDBUS_DEVICE_DUMMY_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_DUMMY_PROXY, NMDBusDeviceDummyProxyClass))
#define NMDBUS_DEVICE_DUMMY_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_DUMMY_PROXY, NMDBusDeviceDummyProxyClass))
#define NMDBUS_IS_DEVICE_DUMMY_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_DUMMY_PROXY))
#define NMDBUS_IS_DEVICE_DUMMY_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_DUMMY_PROXY))

typedef struct _NMDBusDeviceDummyProxy NMDBusDeviceDummyProxy;
typedef struct _NMDBusDeviceDummyProxyClass NMDBusDeviceDummyProxyClass;
typedef struct _NMDBusDeviceDummyProxyPrivate NMDBusDeviceDummyProxyPrivate;

struct _NMDBusDeviceDummyProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceDummyProxyPrivate *priv;
};

struct _NMDBusDeviceDummyProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_dummy_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceDummyProxy, g_object_unref)
#endif

void nmdbus_device_dummy_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceDummy *nmdbus_device_dummy_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceDummy *nmdbus_device_dummy_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_dummy_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceDummy *nmdbus_device_dummy_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceDummy *nmdbus_device_dummy_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_DUMMY_SKELETON (nmdbus_device_dummy_skeleton_get_type ())
#define NMDBUS_DEVICE_DUMMY_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_DUMMY_SKELETON, NMDBusDeviceDummySkeleton))
#define NMDBUS_DEVICE_DUMMY_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_DUMMY_SKELETON, NMDBusDeviceDummySkeletonClass))
#define NMDBUS_DEVICE_DUMMY_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_DUMMY_SKELETON, NMDBusDeviceDummySkeletonClass))
#define NMDBUS_IS_DEVICE_DUMMY_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_DUMMY_SKELETON))
#define NMDBUS_IS_DEVICE_DUMMY_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_DUMMY_SKELETON))

typedef struct _NMDBusDeviceDummySkeleton NMDBusDeviceDummySkeleton;
typedef struct _NMDBusDeviceDummySkeletonClass NMDBusDeviceDummySkeletonClass;
typedef struct _NMDBusDeviceDummySkeletonPrivate NMDBusDeviceDummySkeletonPrivate;

struct _NMDBusDeviceDummySkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceDummySkeletonPrivate *priv;
};

struct _NMDBusDeviceDummySkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_dummy_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceDummySkeleton, g_object_unref)
#endif

NMDBusDeviceDummy *nmdbus_device_dummy_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_DUMMY_H__ */
