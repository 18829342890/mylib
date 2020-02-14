#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include "commandLine.h"
#include "help.h"



int main()
{
	char cmd[MAX_CMD_LEN] = {0};

	while(1)
	{
		cmd[0] = '\0';
		fgets(cmd, MAX_CMD_LEN, stdin);
		cmd[strlen(cmd) - 1] = '\0';

		//判断命令是否合法
		if( !isLegalCmd(cmd) )
		{
			char* params[] = {NULL};
			Help* help = new Help();
			help->processCommandLine(params);
		}



	}
}