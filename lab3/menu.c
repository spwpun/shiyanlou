/*********************************************************/
/*Author: spwpun;                                        */
/*Copyrights: None;                                      */
/*Version: 2.0;                                          */
/*Description: This is write for test my code style;     */
/*Date of modify: 2019-03-17;                            */ 
/*********************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX_CMD_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 10

int Help();
int Quit();

typedef struct DataNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DataNode *next;
} tDataNode;

static tDataNode head[] = 
{
    {"help", "This is help cmd", Help, &head[1]},
    {"version", "Menu program v2.0", NULL, &head[2]},
    {"quit", "Quit from menu", Quit, NULL}
};

int main()
{
    /* cmd line begins */
    while(1)
    {
        char cmd[MAX_CMD_LEN];
        printf("Input a cmd > ");
        scanf("%s", cmd);
        tDataNode *p = head;
        while(p != NULL)
        {
	    if(strcmp(p->cmd,cmd) == 0)
	    {
	        printf("%s - %s\n", p->cmd, p->desc);
	        if(p->handler != NULL)
		{
		    p->handler();
		}
		break;
	    }
	    p = p->next;
	}
	if(p == NULL)
	{
	    printf("Invalid command!\n");
        }
    }
    return 0;
}

int Help()
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf("%s - %s\n", p->cmd, p->desc);
        p = p->next;
    }
    return 0;
}

int Quit()
{
    exit(0);
    return 0;
}
