#ifdef __cplusplus
extern "C" {
#endif


#include "Engine.h"


BOOL APIENTRY DllMain(HANDLE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	return TRUE;
}


int sendCommand(const blazeEngine_commands cmd, const char *args[])
{
	switch (cmd)
	{
		// Main engine commands

		// Init the engine
	case BE_CMD_MAIN_INIT:
		{
			_engine_init(args[0], args[1]);
			break;
		}

						// Stop the engine
	case BE_CMD_MAIN_END:
		{
			_engine_fini();
			break;
		}

	// Indexing commands

						// Init indexing engine
	case BE_CMD_INDEXING_INIT:
		{
			break;
		}
							// Stop indexing engine
	case BE_CMD_INDEXING_END:
		{
			break;
		}
							// Start indexing
	case BE_CMD_INDEXING_START:
		{
			break;
		}
							// Stop indexing
	case BE_CMD_INDEXING_STOP:
		{
			break;
		}

	// Index manipulation commands

	// Reset (clear) the index
	case BE_CMD_INDEX_RESET:
		{
			break;
		}
	// Get an entry from the index
	case BE_CMD_INDEX_GETENTRY:
		{
			break;
		}
							// Remove entry from index
	case BE_CMD_INDEX_REMENTRY:
		{
			break;
		}
							// Ban (remove and never add when indexing again) an entry
	case BE_CMD_INDEX_BANENTRY:
		{
			break;
		}
							// "Unban" an index entry
	case BE_CMD_INDEX_UNBANENTRY:
		{
			break;
		}
								// Create an index entry
	case BE_CMD_INDEX_NEWENTRY:
		{
			break;
		}

							// File metadata request commands
							// Get file's size

	case BE_CMD_METADATA_GETSIZE:
		{
			break;
		}
								// Get file's designated icon (window manager/desktop dependent in *NIX)
	case BE_CMD_METADATA_GETICON:
		{
			break;
		}
								// Get file's creation date
	case BE_CMD_METADATA_GETDATECREATED:
		{
			break;
		}
										// Get file's latest modification date
	case BE_CMD_METADATA_GETDATEMODIFIED:
		{
			break;
		}
										// Get file's latest access date
	case BE_CMD_METADATA_GETDATEACCESSED:
		{
			break;
		}
										// Get file's owner
	case BE_CMD_METADATA_GETOWNER:
		{
			break;
		}
								// Get file's group
	case BE_CMD_METADATA_GETGROUP:
		{
			break;
		}
								// Get file's owner permissions
	case BE_CMD_METADATA_GETPERMISSIONSOWNER:
		{
			break;
		}
											// Get file's group permissions
	case BE_CMD_METADATA_GETPERMISSIONSGROUP:
		{
			break;
		}
											// Get file's other permissions
	case BE_CMD_METADATA_GETPERMISSIONSOTHER:
		{
			break;
		}
											// If the file is hidden (starts with `.' in *NIX; is a file attribute in Windows)
	case BE_CMD_METADATA_GETISHIDDEN:
		{
			break;
		}
	default:
		{
			return NULL;
		}
	}
}


#ifdef __cplusplus
}
#endif