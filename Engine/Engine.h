#ifndef __ENGINE_H__
#define __ENGINE_H__


// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif

#include "Engine_global.h"


int sendCommand(const blazeEngine_commands cmd, const char **args);	// Send a command to the engine (from the caller only)



// Mangling prevention
#ifdef __cplusplus
}
#endif

#endif // __ENGINE_H__