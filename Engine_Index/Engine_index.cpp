#include "Engine_index.h"

#include <cstring>
using namespace std;


// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif

#include "Engine_global.h"

int init(const char *indexName, const char *indexDir, const bool usesMultipleFiles,
		 const blazeEngine_storageOpts *storesWhat, const bool isUserReadable)
{
	// First, check what the index should store
	// (if storesWhat NULL, assume all metadata is stored
	if (storesWhat == NULL)
	{
	}
	else
	{
	}
}


// Mangling prevention
#ifdef __cplusplus
}
#endif