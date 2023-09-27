#include<stdio.h>

int main(void)
{
	int h, m, s;
	int x;
	
	scanf("%d", &x);
	
	h = x / 3600;
	x = x % 3600;
	m = x / 60;
	x = x % 60;
	s = x;
	
	printf("%d:%d:%d\n", h, m, s);
	
	return (0);
}