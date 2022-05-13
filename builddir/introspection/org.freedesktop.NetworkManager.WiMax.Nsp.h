/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __ORG_FREEDESKTOP_NETWORKMANAGER_WIMAX_NSP_H__
#define __ORG_FREEDESKTOP_NETWORKMANAGER_WIMAX_NSP_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.NetworkManager.WiMax.Nsp */

#define NMDBUS_TYPE_WI_MAX_NSP (nmdbus_wi_max_nsp_get_type ())
#define NMDBUS_WI_MAX_NSP(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_WI_MAX_NSP, NMDBusWiMaxNsp))
#define NMDBUS_IS_WI_MAX_NSP(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_WI_MAX_NSP))
#define NMDBUS_WI_MAX_NSP_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), NMDBUS_TYPE_WI_MAX_NSP, NMDBusWiMaxNspIface))

struct _NMDBusWiMaxNsp;
typedef struct _NMDBusWiMaxNsp NMDBusWiMaxNsp;
typedef struct _NMDBusWiMaxNspIface NMDBusWiMaxNspIface;

struct _NMDBusWiMaxNspIface
{
  GTypeInterface parent_iface;

  const gchar * (*get_name) (NMDBusWiMaxNsp *object);

  guint  (*get_network_type) (NMDBusWiMaxNsp *object);

  guint  (*get_signal_quality) (NMDBusWiMaxNsp *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusWiMaxNsp, g_object_unref)
#endif

GType nmdbus_wi_max_nsp_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *nmdbus_wi_max_nsp_interface_info (void);
guint nmdbus_wi_max_nsp_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
const gchar *nmdbus_wi_max_nsp_get_name (NMDBusWiMaxNsp *object);
gchar *nmdbus_wi_max_nsp_dup_name (NMDBusWiMaxNsp *object);
void nmdbus_wi_max_nsp_set_name (NMDBusWiMaxNsp *object, const gchar *value);

guint nmdbus_wi_max_nsp_get_signal_quality (NMDBusWiMaxNsp *object);
void nmdbus_wi_max_nsp_set_signal_quality (NMDBusWiMaxNsp *object, guint value);

guint nmdbus_wi_max_nsp_get_network_type (NMDBusWiMaxNsp *object);
void nmdbus_wi_max_nsp_set_network_type (NMDBusWiMaxNsp *object, guint value);


/* ---- */

#define NMDBUS_TYPE_WI_MAX_NSP_PROXY (nmdbus_wi_max_nsp_proxy_get_type ())
#define NMDBUS_WI_MAX_NSP_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_WI_MAX_NSP_PROXY, NMDBusWiMaxNspProxy))
#define NMDBUS_WI_MAX_NSP_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_WI_MAX_NSP_PROXY, NMDBusWiMaxNspProxyClass))
#define NMDBUS_WI_MAX_NSP_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_WI_MAX_NSP_PROXY, NMDBusWiMaxNspProxyClass))
#define NMDBUS_IS_WI_MAX_NSP_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_WI_MAX_NSP_PROXY))
#define NMDBUS_IS_WI_MAX_NSP_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_WI_MAX_NSP_PROXY))

typedef struct _NMDBusWiMaxNspProxy NMDBusWiMaxNspProxy;
typedef struct _NMDBusWiMaxNspProxyClass NMDBusWiMaxNspProxyClass;
typedef struct _NMDBusWiMaxNspProxyPrivate NMDBusWiMaxNspProxyPrivate;

struct _NMDBusWiMaxNspProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  NMDBusWiMaxNspProxyPrivate *priv;
};

struct _NMDBusWiMaxNspProxyClass
{
  GDBusProxyClass parent_class;
};

GType nmdbus_wi_max_nsp_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusWiMaxNspProxy, g_object_unref)
#endif

void nmdbus_wi_max_nsp_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusWiMaxNsp *nmdbus_wi_max_nsp_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusWiMaxNsp *nmdbus_wi_max_nsp_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void nmdbus_wi_max_nsp_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
NMDBusWiMaxNsp *nmdbus_wi_max_nsp_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
NMDBusWiMaxNsp *nmdbus_wi_max_nsp_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define NMDBUS_TYPE_WI_MAX_NSP_SKELETON (nmdbus_wi_max_nsp_skeleton_get_type ())
#define NMDBUS_WI_MAX_NSP_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), NMDBUS_TYPE_WI_MAX_NSP_SKELETON, NMDBusWiMaxNspSkeleton))
#define NMDBUS_WI_MAX_NSP_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), NMDBUS_TYPE_WI_MAX_NSP_SKELETON, NMDBusWiMaxNspSkeletonClass))
#define NMDBUS_WI_MAX_NSP_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), NMDBUS_TYPE_WI_MAX_NSP_SKELETON, NMDBusWiMaxNspSkeletonClass))
#define NMDBUS_IS_WI_MAX_NSP_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), NMDBUS_TYPE_WI_MAX_NSP_SKELETON))
#define NMDBUS_IS_WI_MAX_NSP_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), NMDBUS_TYPE_WI_MAX_NSP_SKELETON))

typedef struct _NMDBusWiMaxNspSkeleton NMDBusWiMaxNspSkeleton;
typedef struct _NMDBusWiMaxNspSkeletonClass NMDBusWiMaxNspSkeletonClass;
typedef struct _NMDBusWiMaxNspSkeletonPrivate NMDBusWiMaxNspSkeletonPrivate;

struct _NMDBusWiMaxNspSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  NMDBusWiMaxNspSkeletonPrivate *priv;
};

struct _NMDBusWiMaxNspSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType nmdbus_wi_max_nsp_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (NMDBusWiMaxNspSkeleton, g_object_unref)
#endif

NMDBusWiMaxNsp *nmdbus_wi_max_nsp_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_NETWORKMANAGER_WIMAX_NSP_H__ */