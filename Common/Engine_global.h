// The searching engine's fat header file


#ifndef __ENGINE_GLOBAL_H__
#define __ENGINE_GLOBAL_H__


// Mangling prevention
#ifdef __cplusplus
extern "C" {
#endif


// For DLL functionality
#define WIN32_LEAN_AND_MEAN	// So junk won't be included
#include <windows.h>


/*
// Commands for the engine to carry out
enum blazeEngine_commands
{
	// Main engine commands
	BE_CMD_MAIN_INIT,						// Init the engine
	BE_CMD_MAIN_END,						// Stop the engine

	// Indexing commands
	BE_CMD_INDEXING_INIT,					// Init indexing engine
	BE_CMD_INDEXING_END,					// Stop indexing engine
	BE_CMD_INDEXING_START,					// Start indexing
	BE_CMD_INDEXING_STOP,					// Stop indexing

	// Index manipulation commands
	BE_CMD_INDEX_RESET,					// Reset (clear) the index
	BE_CMD_INDEX_GETENTRY,					// Get an entry from the index
	BE_CMD_INDEX_REMENTRY,					// Remove entry from index
	BE_CMD_INDEX_BANENTRY,					// Ban (remove and never add when indexing again) an entry
	BE_CMD_INDEX_UNBANENTRY,				// "Unban" an index entry
	BE_CMD_INDEX_NEWENTRY,					// Create an index entry

	// File metadata request commands
	BE_CMD_METADATA_GETSIZE,				// Get file's size
	BE_CMD_METADATA_GETICON,				// Get file's designated icon (window manager/desktop dependent in *NIX)
	BE_CMD_METADATA_GETDATECREATED,		// Get file's creation date
	BE_CMD_METADATA_GETDATEMODIFIED,		// Get file's latest modification date
	BE_CMD_METADATA_GETDATEACCESSED,		// Get file's latest access date
	BE_CMD_METADATA_GETOWNER,				// Get file's owner
	BE_CMD_METADATA_GETGROUP,				// Get file's group
	BE_CMD_METADATA_GETPERMISSIONSOWNER,	// Get file's owner permissions
	BE_CMD_METADATA_GETPERMISSIONSGROUP,	// Get file's group permissions
	BE_CMD_METADATA_GETPERMISSIONSOTHER,	// Get file's other permissions
	BE_CMD_METADATA_GETISHIDDEN 			// If the file is hidden (starts with `.' in *NIX, is a file attribute in Windows)
};
*/

// Commands for the engine to carry out
enum blazeEngine_storageOpts
{
	BE_SOPTS_SIZE,					// Get file's size
	BE_SOPTS_ICON,					// Get file's designated icon (window manager/desktop dependent in *NIX)
	BE_SOPTS_DATECREATED,			// Get file's creation date
	BE_SOPTS_DATEMODIFIED,			// Get file's latest modification date
	BE_SOPTS_DATEACCESSED,			// Get file's latest access date
	BE_SOPTS_OWNER,				// Get file's owner
	BE_SOPTS_GROUP,				// Get file's group
	BE_SOPTS_PERMISSIONSOWNER,		// Get file's owner permissions
	BE_SOPTS_PERMISSIONSGROUP,		// Get file's group permissions
	BE_SOPTS_PERMISSIONSOTHER,		// Get file's other permissions
	BE_SOPTS_ISHIDDEN				// If the file is hidden (starts with `.' in *NIX, is a file attribute in Windows)
};

enum blazeEngine_returns
{
	BE_RET_FAIL,
	BE_RET_SUCCESS
};

struct blazeEngine_index_entry
{
	unsigned double id;
	char *fileName;
	char *fileLocation;
	char sha1_hash[40];
};

// Mangling prevention
#ifdef __cplusplus
}
#endif

#endif // __ENGINE_GLOBAL_H__
