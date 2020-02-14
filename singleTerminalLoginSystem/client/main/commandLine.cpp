#include "commandLine.h"
#include "help.h"
#include <string.h>




bool isLegalCmd(const char* cmd)
{
	for(int i = 0; s_my_cmds[i].cmd; ++i)
	{
		if(strcmp(cmd, s_my_cmds[i].cmd) == 0)
		{
			return true;
		}
	}

	return false;
}

const char* getCmdImplClass(const char* cmd)
{
	for(int i = 0; s_my_cmds[i].cmd; ++i)
	{
		if(strcmp(cmd, s_my_cmds[i].cmd) == 0)
		{
			return s_my_cmds[i].cmdImplClass;
		}
	}

	return NULL;
}

const char* getCmdImplDesc(const char* cmd)
{
	for(int i = 0; s_my_cmds[i].cmd; ++i)
	{
		if(strcmp(cmd, s_my_cmds[i].cmd) == 0)
		{
			return s_my_cmds[i].cmdDesc;
		}
	}

	return NULL;
}

int processCmd(const char* cmd)
{
	const char* cmdImplClass = getCmdImplClass(cmd);
	if(cmdImplClass == NULL)
	{
		char* params[] = {NULL};
		Help* help = new Help();
		help->processCommandLine(params);
		return -1;
	}

	


}