/*************************************************************************
	> File Name: apps/showTime.c
	> Author: KEBE
	> Mail: mail@kebe7jun.com
	> Created Time: 2015年12月16日 星期三 11时38分09秒
 ************************************************************************/

#include "stdio.h"
#include "time.h"
#include "apps/calc.h"
#define EXIT 1
#define A 32

void keyDown()
{	int ch;
	while(1)
	{
		ch = getch();
		switch (ch)
		{
			case A :
				printf("A");
		

			case EXIT:
				printf("Exit success~\n\n");
				return ;
		}

	}
}
int Calculator(int a, int b, char op)
{
	switch(op)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}

int main_calc()
{
	console_clear();
	printf("Calculator\n");
    printf("ESC TO EXIT\n");

    keyDown();	

    return 0;
}
