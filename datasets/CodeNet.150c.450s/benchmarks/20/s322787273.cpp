#include <stdio.h>

int main(void)
{
	int time;
	int hour, min, sec;
	scanf("%d", &time);
	sec = time % 60;
	time = (time - sec) / 60;
	min = time % 60;
	time = (time - min) / 60;
	hour = time;
	printf("%d:%d:%d\n", hour, min, sec);
} 