#ifndef __I_PROCESS_COMMAND_LENE_H__
#define __I_PROCESS_COMMAND_LENE_H__

#include <stdio.h>

class IProcessCommandLine
{

public:
	/*
	 * 处理命令的公共接口
	 */
	virtual int processCommandLine(char* params[]) = 0;
};




#endif