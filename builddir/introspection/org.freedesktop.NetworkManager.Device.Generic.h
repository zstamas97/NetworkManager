/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_GENERIC_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_GENERIC_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Generic */

#define NMDBUS_TYPE_DEVICE_GENERIC (nmdbus_device_generic_get_type ())
#define NMDBUS_DEVICE_GENERIC(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_GENERIC, NMDBusDeviceGeneric))
#define NMDBUS_IS_DEVICE_GENERIC(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_GENERIC))
#define NMDBUS_DEVICE_GENERIC_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_GENERIC, NMDBusDeviceGenericIface))

struct _NMDBusDeviceGeneric;
typedef struct _NMDBusDeviceGeneric NMDBusDeviceGeneric;
typedef struct _NMDBusDeviceGenericIface NMDBusDeviceGenericIface;

struct _NMDBusDeviceGenericIface
{
  GTypeInterface parent_iface;

  const gchar * (*get_hw_address) (NMDBusDeviceGeneric *object);

  const gchar * (*get_type_description) (NMDBusDeviceGeneric *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceGeneric, g_object_unref)
#endif

GType nmdbus_device_generic_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_generic_interface_info (void);
guint nmdbus_device_generic_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
const gchar *nmdbus_device_generic_get_hw_address (NMDBusDeviceGeneric *object);
gchar *nmdbus_device_generic_dup_hw_address (NMDBusDeviceGeneric *object);
void nmdbus_device_generic_set_hw_address (NMDBusDeviceGeneric *object, const gchar *value);

const gchar *nmdbus_device_generic_get_type_description (NMDBusDeviceGeneric *object);
gchar *nmdbus_device_generic_dup_type_description (NMDBusDeviceGeneric *object);
void nmdbus_device_generic_set_type_description (NMDBusDeviceGeneric *object, const gchar *value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_GENERIC_PROXY (nmdbus_device_generic_proxy_get_type ())
#define NMDBUS_DEVICE_GENERIC_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_GENERIC_PROXY, NMDBusDeviceGenericProxy))
#define NMDBUS_DEVICE_GENERIC_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_GENERIC_PROXY, NMDBusDeviceGenericProxyClass))
#define NMDBUS_DEVICE_GENERIC_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_GENERIC_PROXY, NMDBusDeviceGenericProxyClass))
#define NMDBUS_IS_DEVICE_GENERIC_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_GENERIC_PROXY))
#define NMDBUS_IS_DEVICE_GENERIC_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_GENERIC_PROXY))

typedef struct _NMDBusDeviceGenericProxy NMDBusDeviceGenericProxy;
typedef struct _NMDBusDeviceGenericProxyClass NMDBusDeviceGenericProxyClass;
typedef struct _NMDBusDeviceGenericProxyPrivate NMDBusDeviceGenericProxyPrivate;

struct _NMDBusDeviceGenericProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceGenericProxyPrivate *priv;
};

struct _NMDBusDeviceGenericProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_generic_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceGenericProxy, g_object_unref)
#endif

void nmdbus_device_generic_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceGeneric *nmdbus_device_generic_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceGeneric *nmdbus_device_generic_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_generic_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceGeneric *nmdbus_device_generic_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceGeneric *nmdbus_device_generic_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_GENERIC_SKELETON (nmdbus_device_generic_skeleton_get_type ())
#define NMDBUS_DEVICE_GENERIC_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_GENERIC_SKELETON, NMDBusDeviceGenericSkeleton))
#define NMDBUS_DEVICE_GENERIC_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_GENERIC_SKELETON, NMDBusDeviceGenericSkeletonClass))
#define NMDBUS_DEVICE_GENERIC_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_GENERIC_SKELETON, NMDBusDeviceGenericSkeletonClass))
#define NMDBUS_IS_DEVICE_GENERIC_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_GENERIC_SKELETON))
#define NMDBUS_IS_DEVICE_GENERIC_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_GENERIC_SKELETON))

typedef struct _NMDBusDeviceGenericSkeleton NMDBusDeviceGenericSkeleton;
typedef struct _NMDBusDeviceGenericSkeletonClass NMDBusDeviceGenericSkeletonClass;
typedef struct _NMDBusDeviceGenericSkeletonPrivate NMDBusDeviceGenericSkeletonPrivate;

struct _NMDBusDeviceGenericSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceGenericSkeletonPrivate *priv;
};

struct _NMDBusDeviceGenericSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_generic_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceGenericSkeleton, g_object_unref)
#endif

NMDBusDeviceGeneric *nmdbus_device_generic_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_GENERIC_H__ */
