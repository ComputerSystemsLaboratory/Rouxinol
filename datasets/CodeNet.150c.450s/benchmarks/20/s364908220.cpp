#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int s;
	scanf("%d", &s);

	int hour = s / 3600;
	int min = s % 3600 / 60;
	int sec = s % 3600 % 60;
	printf("%d:%d:%d\n", hour,min,sec );

	return 0;
}