/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2010 - 2022 Red Hat, Inc.
 */

#ifndef NMC_NMCLI_H
#define NMC_NMCLI_H

#include "libnmc-base/nm-secret-agent-simple.h"
#include "libnmc-setting/nm-meta-setting-desc.h"

struct _NMPolkitListener;

typedef char *(*NmcCompEntryFunc)(const char *, int);

/* nmcli exit codes */
typedef enum {
    /* Indicates successful execution */
    NMC_RESULT_SUCCESS = 0,

    /* Unknown / unspecified error */
    NMC_RESULT_ERROR_UNKNOWN = 1,

    /* Wrong invocation of nmcli */
    NMC_RESULT_ERROR_USER_INPUT = 2,

    /* A timeout expired */
    NMC_RESULT_ERROR_TIMEOUT_EXPIRED = 3,

    /* Error in connection activation */
    NMC_RESULT_ERROR_CON_ACTIVATION = 4,

    /* Error in connection deactivation */
    NMC_RESULT_ERROR_CON_DEACTIVATION = 5,

    /* Error in device disconnect */
    NMC_RESULT_ERROR_DEV_DISCONNECT = 6,

    /* Error in connection deletion */
    NMC_RESULT_ERROR_CON_DEL = 7,

    /* NetworkManager is not running */
    NMC_RESULT_ERROR_NM_NOT_RUNNING = 8,

    /* No more used, keep to preserve API */
    NMC_RESULT_ERROR_VERSIONS_MISMATCH = 9,

    /* Connection/Device/AP not found */
    NMC_RESULT_ERROR_NOT_FOUND = 10,

    /* --complete-args signals a file name may follow */
    NMC_RESULT_COMPLETE_FILE = 65,
} NMCResultCode;

typedef enum { NMC_PRINT_TERSE = 0, NMC_PRINT_NORMAL = 1, NMC_PRINT_PRETTY = 2 } NMCPrintOutput;

static inline NMMetaAccessorGetType
nmc_print_output_to_accessor_get_type(NMCPrintOutput print_output)
{
    return NM_IN_SET(print_output, NMC_PRINT_NORMAL, NMC_PRINT_PRETTY)
               ? NM_META_ACCESSOR_GET_TYPE_PRETTY
               : NM_META_ACCESSOR_GET_TYPE_PARSABLE;
}

/* === Output fields === */

typedef enum {
    NMC_OF_FLAG_FIELD_NAMES = 0x00000001, /* Print field names instead of values */
    NMC_OF_FLAG_SECTION_PREFIX =
        0x00000002, /* Use the first value as section prefix for the other field names - just in multiline */
    NMC_OF_FLAG_MAIN_HEADER_ADD =
        0x00000004, /* Print main header in addition to values/field names */
    NMC_OF_FLAG_MAIN_HEADER_ONLY = 0x00000008, /* Print main header only */
} NmcOfFlags;

typedef struct {
    const char *ansi_seq[_NM_META_COLOR_NUM];
} NmcColorPalette;

extern const NMMetaType nmc_meta_type_generic_info;

typedef struct _NmcOutputField     NmcOutputField;
typedef struct _NmcMetaGenericInfo NmcMetaGenericInfo;

struct _NmcOutputField {
    const NMMetaAbstractInfo *info;

    int   width;              /* Width in screen columns */
    void *value;              /* Value of current field - char* or
                                     * char** (NULL-terminated array) */
    bool  value_is_array : 1; /* Whether value is char** instead of char* */
    bool  free_value : 1;     /* Whether to free the value */

    NmcOfFlags  flags; /* Flags - whether and how to print values/field names/headers */
    NMMetaColor color; /* Use this color to print value */
};

typedef struct _NmcConfig {
    NMCPrintOutput  print_output;         /* Output mode */
    bool            use_colors;           /* Whether to use colors for output: option '--color' */
    bool            multiline_output : 1; /* Multiline output instead of default tabular */
    bool            escape_values : 1;    /* Whether to escape ':' and '\' in terse tabular mode */
    bool            in_editor : 1;        /* Whether running the editor - nmcli con edit' */
    bool            show_secrets : 1;     /* Whether to display secrets (both input
                                           * and output): option '--show-secrets' */
    bool            overview : 1;         /* Overview mode (hide default values) */
    NmcColorPalette palette;
} NmcConfig;

typedef struct {
    pid_t pid;
} NmcPagerData;

typedef struct _NmcOutputData {
    GPtrArray *
        output_data; /* GPtrArray of arrays of NmcOutputField structs - accumulates data for output */
} NmcOutputData;

/* NmCli - main structure */
typedef struct _NmCli {
    NMClient *client; /* Pointer to NMClient of libnm */

    NMCResultCode return_value; /* Return code of nmcli */
    GString      *return_text;  /* Reason text */

    NmcPagerData pager_data;

    int timeout; /* Operation timeout */

    NMSecretAgentSimple      *secret_agent; /* Secret agent */
    GHashTable               *pwds_hash;    /* Hash table with passwords in passwd-file */
    struct _NMPolkitListener *pk_listener;  /* polkit agent listener */

    int should_wait; /* Semaphore indicating whether nmcli should not end or not yet */

    bool nowait_flag : 1;    /* '--nowait' option; used for passing to callbacks */
    bool mode_specified : 1; /* Whether tabular/multiline mode was specified via '--mode' option */
    bool offline : 1;        /* Communicate the connection data over stdin/stdout
                              * instead of talking to the daemon. */
    bool ask : 1;            /* Ask for missing parameters: option '--ask' */
    bool complete : 1;       /* Autocomplete the command line */
    bool editor_status_line : 1;       /* Whether to display status line in connection editor */
    bool editor_save_confirmation : 1; /* Whether to ask for confirmation on
                                        * saving connections with 'autoconnect=yes' */

    union {
        const NmcConfig nmc_config;
        NmcConfig       nmc_config_mutable;
    };
    char *required_fields; /* Required fields in output: '--fields' option */

    char *palette_buffer; /* Buffer with sequences for terminal-colors.d(5)-based coloring. */

    GPtrArray *offline_connections;
} NmCli;

extern const NmCli *const nm_cli_global_readline;

/* Error quark for GError domain */
#define NMCLI_ERROR (nmcli_error_quark())
GQuark nmcli_error_quark(void);

extern GMainLoop *loop;

gboolean nmc_seen_sigint(void);
void     nmc_clear_sigint(void);
void     nmc_set_sigquit_internal(void);
void     nmc_exit(void);

void nm_cli_spawn_pager(const NmcConfig *nmc_config, NmcPagerData *pager_data);

void nmc_empty_output_fields(NmcOutputData *output_data);

#define NMC_OUTPUT_DATA_DEFINE_SCOPED(out)                               \
    gs_unref_array GArray                         *out##_indices = NULL; \
    nm_auto(nmc_empty_output_fields) NmcOutputData out           = {     \
                  .output_data = g_ptr_array_new_full(20, g_free),       \
    }

/*****************************************************************************/

struct _NMCCommand;

typedef struct _NMCCommand {
    const char *cmd;
    void (*func)(const struct _NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
    void (*usage)(void);

    bool needs_client : 1;       /* Ensure a client instance is there before calling
                                  * the handler (unless --offline has been given). */
    bool needs_nm_running : 1;   /* Client instance exists *and* the service is
                                  * actually present on the bus. */
    bool supports_offline : 1;   /* Run the handler without a client even if the
                                  * comand usually requires one if --offline option was used. */
    bool needs_offline_conn : 1; /* With --online, read in a keyfile from
                                  * standard input before dispatching the handler. */
} NMCCommand;

void nmc_command_func_agent(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void nmc_command_func_general(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void
nmc_command_func_networking(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void nmc_command_func_radio(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void nmc_command_func_monitor(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void
nmc_command_func_overview(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void
nmc_command_func_connection(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);
void nmc_command_func_device(const NMCCommand *cmd, NmCli *nmc, int argc, const char *const *argv);

/*****************************************************************************/

#endif /* NMC_NMCLI_H */
