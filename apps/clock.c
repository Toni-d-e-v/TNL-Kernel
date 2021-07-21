#include "stdio.h"
#include "time.h"
#include "apps/clock.h"

int main_clock(){
	while (1){	
		console_clear();
		printf("ESC TO EXIT\n");
		time_t t = time(NULL);
		int hour, minute, second;
		second = t%60;
		minute = t%3600/60;
		hour = t%(3600*24)/3600;
		printf("%d : %d : %d\n", hour, minute, second);
		keyDown();
		return 0;

	}
}
