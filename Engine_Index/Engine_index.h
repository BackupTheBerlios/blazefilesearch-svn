#ifndef __ENGINE_INDEX_H__
#define __ENGINE_INDEX_H__

// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif


#include "Engine_global.h"


int init(const char *indexName, const char *indexDir, const bool usesMultipleFiles,
		 const blazeEngine_storageOpts *storesWhat, const bool isUserReadable);

// Mangling prevention
#ifdef __cplusplus
}
#endif

#endif // __ENGINE_INDEX_H__