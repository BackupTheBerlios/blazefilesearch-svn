#ifndef __ENGINE_H__
#define __ENGINE_H__


// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif

#include "Engine_global.h"


int sendCommand(const blazeEngine_commands cmd, const char *args[]);	// Send a command to the engine (from the caller only)


int _engine_init(const char *indexFileName, const char *indexFileLocation);
int _engine_fini();

int blazeEngine_main_initialize();
int blazeEngine_main_destroy();

int blazeEngine_index_initialize();
int blazeEngine_index_destroy();
int blazeEngine_index_startIndexing();
int blazeEngine_index_stopIndexing();

int blazeEngine_index_reset();
int blazeEngine_index_getEntry();
int blazeEngine_index_createEntry(blazeEngine_index_entry entry);
int blazeEngine_index_removeEntry();
int blazeEngine_index_banEntry();
int blazeEngine_index_unBanEntry();

int blazeEngine_file_getSize();
int blazeEngine_file_getWMIcon();
int blazeEngine_file_getDateCreated();
int blazeEngine_file_getDateModified();
int blazeEngine_file_getDateAccessed();
int blazeEngine_file_getOwner();
int blazeEngine_file_getGroup();
int blazeEngine_file_getPermissions_Owner();
int blazeEngine_file_getPermissions_Group();
int blazeEngine_file_getPermissions_Other();
int blazeEngine_file_getIsHidden();

// Mangling prevention
#ifdef __cplusplus
}
#endif

#endif // __ENGINE_H__
