/*********************************************************/
/*****Author: spwpun;                                    */
/*****Copyrights: None;                                  */
/*****Version: 1.0;                                      */
/*****Description: This is write for test my code style. */
/*********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetCPUid()
{
    printf("Test for cmd menu program!\n");
    return 0;
}

int main()
{
    char cmd[128];
    while(1)
    {	
	scanf("%s", cmd);
	if(strcmp(cmd, "help") == 0)
	{
	    printf("This is a help command!\n");
	}
	else if(strcmp(cmd, "quit") == 0)
	{
	    exit(0);
	}
	else if(strcmp(cmd, "cpuinfo") == 0)
	{
	    GetCPUid();
	    printf("Above is test CPU info!\n");
	}
	else if(strcmp(cmd, "whos") == 0)
	{
	    printf("spwpun\n");
	}
	else if(strcmp(cmd, "ls") == 0)
	{
	    printf("The valid command include 'help' 'quit' 'cpuinfo' 'whos' 'ls'.\n");
	}
	else
	{
	    printf("Invalid  command! Type 'ls' to see if the cmd is valid!\n");
	}   
    }
    return 0;
}
