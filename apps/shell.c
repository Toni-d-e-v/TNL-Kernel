/*************************************************************************
	> File Name: apps/shell.c
	> Original Author: KEBE
	> Author: Toni Dev
	> Created Time: Wed 16 Aug 2017 04:06:21 PM CST
 ************************************************************************/

#include "stdio.h"
#include "string.h"
#include "system.h"
#include "time.h"
#include "math.h"
#include "apps/shell.h"

#define SHELL_MAX_LENGTH 1024

void dealShell(char* shell)
{
	int result = 0;
	int row = 0;

	char **s = split(shell, ' ');
	if (!strcmp(shell, "reboot"))
	{
		reboot();
	}
	else if (!strcmp(shell, "time"))
	{
		result = main_show_time();
	}
	else if (!strcmp(shell, "rand"))
	{
		printf("%d\n", abs(rand()));
	}
	else if (!strcmp(shell, "clear"))
	{
		console_clear();
	}
	else if (!strcmp(shell, "help"))
	{
		printf("Usage 'commands [option]...' to call commands.\n");
		printf("This shell support the follows commands:\n");
		printf("reboot    ------ Reboot you system.\n");
		printf("clear     ------ Clear the screen.\n");
		printf("time      ------ Show now system time.\n");
		printf("rand      ------ Create a rand number.\n");
		printf("help      ------ Show the help documents.\n");
	}
	else if (!strcmp(shell, ""))
	{
		//Nothing to do.
	}
	else
	{
		printf("Sorry, the command you just inputed is not supported, if you have any question, run help\n");
	}

	if (result)
	{
		printf("Error, the %s return code(%d)!\n", shell, result);
	}
}

//Main function.
int main_shell()
{
	char sh[SHELL_MAX_LENGTH];
	srand(time(NULL));
	printf("    (>---<)\n ");
    printf("  ,'     `.\n ");
    printf(" /  q   p  \\ \n ");
    printf("(  >(_Y_)<  )\n ");
    printf(" >-' `-' `-<-. \n ");
    printf("Version 0.0.5\n");
	printf("REWRITE EDITION\n");

	while(1)
	{
		setTextColor(rc_light_red, rc_magenta);
		printf("Shell >");
		setTextColor(rc_black, rc_white);
		printf(" ");
		gets(sh);
		dealShell(sh);
	}
	return RUN_SUCCESS;
}

