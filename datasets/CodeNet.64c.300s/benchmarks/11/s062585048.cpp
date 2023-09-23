#include<stdio.h>

int main(void)
{
	int time;
	int h,m,s;
	
	scanf( "%d", &time);
	h=time/3600;
	time=time%3600;
	m=time/60;
	s=time%60;
	printf( "%d:%d:%d\n", h, m, s);
	
	return 0;
}