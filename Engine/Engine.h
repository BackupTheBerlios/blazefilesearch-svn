#ifndef __ENGINE_H__
#define __ENGINE_H__


// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif

#include "Engine_global.h"


int sendCommand(const blazeEngine_commands cmd, const char *args[]);	// Send a command to the engine (from the caller only)


int _engine_init(const char *indexFileName const char *indexFileLocation);
int _engine_fini();

// Mangling prevention
#ifdef __cplusplus
}
#endif

#endif // __ENGINE_H__