/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_STATISTICS_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_STATISTICS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.Device.Statistics */

#define NMDBUS_TYPE_DEVICE_STATISTICS (nmdbus_device_statistics_get_type ())
#define NMDBUS_DEVICE_STATISTICS(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_STATISTICS, NMDBusDeviceStatistics))
#define NMDBUS_IS_DEVICE_STATISTICS(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_STATISTICS))
#define NMDBUS_DEVICE_STATISTICS_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_DEVICE_STATISTICS, NMDBusDeviceStatisticsIface))

struct _NMDBusDeviceStatistics;
typedef struct _NMDBusDeviceStatistics NMDBusDeviceStatistics;
typedef struct _NMDBusDeviceStatisticsIface NMDBusDeviceStatisticsIface;

struct _NMDBusDeviceStatisticsIface
{
  GTypeInterface parent_iface;

  guint  (*get_refresh_rate_ms) (NMDBusDeviceStatistics *object);

  guint64  (*get_rx_bytes) (NMDBusDeviceStatistics *object);

  guint64  (*get_tx_bytes) (NMDBusDeviceStatistics *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceStatistics, g_object_unref)
#endif

GType nmdbus_device_statistics_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_device_statistics_interface_info (void);
guint nmdbus_device_statistics_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
guint nmdbus_device_statistics_get_refresh_rate_ms (NMDBusDeviceStatistics *object);
void nmdbus_device_statistics_set_refresh_rate_ms (NMDBusDeviceStatistics *object, guint value);

guint64 nmdbus_device_statistics_get_tx_bytes (NMDBusDeviceStatistics *object);
void nmdbus_device_statistics_set_tx_bytes (NMDBusDeviceStatistics *object, guint64 value);

guint64 nmdbus_device_statistics_get_rx_bytes (NMDBusDeviceStatistics *object);
void nmdbus_device_statistics_set_rx_bytes (NMDBusDeviceStatistics *object, guint64 value);


/* ---- */

#define NMDBUS_TYPE_DEVICE_STATISTICS_PROXY (nmdbus_device_statistics_proxy_get_type ())
#define NMDBUS_DEVICE_STATISTICS_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_STATISTICS_PROXY, NMDBusDeviceStatisticsProxy))
#define NMDBUS_DEVICE_STATISTICS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_STATISTICS_PROXY, NMDBusDeviceStatisticsProxyClass))
#define NMDBUS_DEVICE_STATISTICS_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_STATISTICS_PROXY, NMDBusDeviceStatisticsProxyClass))
#define NMDBUS_IS_DEVICE_STATISTICS_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_STATISTICS_PROXY))
#define NMDBUS_IS_DEVICE_STATISTICS_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_STATISTICS_PROXY))

typedef struct _NMDBusDeviceStatisticsProxy NMDBusDeviceStatisticsProxy;
typedef struct _NMDBusDeviceStatisticsProxyClass NMDBusDeviceStatisticsProxyClass;
typedef struct _NMDBusDeviceStatisticsProxyPrivate NMDBusDeviceStatisticsProxyPrivate;

struct _NMDBusDeviceStatisticsProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusDeviceStatisticsProxyPrivate *priv;
};

struct _NMDBusDeviceStatisticsProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_device_statistics_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceStatisticsProxy, g_object_unref)
#endif

void nmdbus_device_statistics_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceStatistics *nmdbus_device_statistics_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceStatistics *nmdbus_device_statistics_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_device_statistics_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusDeviceStatistics *nmdbus_device_statistics_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusDeviceStatistics *nmdbus_device_statistics_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON (nmdbus_device_statistics_skeleton_get_type ())
#define NMDBUS_DEVICE_STATISTICS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON, NMDBusDeviceStatisticsSkeleton))
#define NMDBUS_DEVICE_STATISTICS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON, NMDBusDeviceStatisticsSkeletonClass))
#define NMDBUS_DEVICE_STATISTICS_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON, NMDBusDeviceStatisticsSkeletonClass))
#define NMDBUS_IS_DEVICE_STATISTICS_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON))
#define NMDBUS_IS_DEVICE_STATISTICS_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_DEVICE_STATISTICS_SKELETON))

typedef struct _NMDBusDeviceStatisticsSkeleton NMDBusDeviceStatisticsSkeleton;
typedef struct _NMDBusDeviceStatisticsSkeletonClass NMDBusDeviceStatisticsSkeletonClass;
typedef struct _NMDBusDeviceStatisticsSkeletonPrivate NMDBusDeviceStatisticsSkeletonPrivate;

struct _NMDBusDeviceStatisticsSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusDeviceStatisticsSkeletonPrivate *priv;
};

struct _NMDBusDeviceStatisticsSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_device_statistics_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusDeviceStatisticsSkeleton, g_object_unref)
#endif

NMDBusDeviceStatistics *nmdbus_device_statistics_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_DEVICE_STATISTICS_H__ */
