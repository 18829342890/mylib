#ifndef __HELP_H__
#define __HELP_H__

#include "IProcessCommandLine.h"


class Help : IProcessCommandLine
{

public:
	int processCommandLine(char* params[])
	{
		processHelp();
		return 0;
	}

private:
	void processHelp()
	{
		printf("########################################################################\n");
		printf("######### help/? : Show all legal commands #############################\n");
		printf("########################################################################\n");
	}

};





#endif