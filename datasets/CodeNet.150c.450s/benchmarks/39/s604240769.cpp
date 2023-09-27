#include<stdio.h>

int main(void)
{
	int a, b;
	int area;
	int cir;
	scanf( "%d %d", &a, &b);
	area=a*b;
	cir=(a*2)+(b*2);
	printf( "%d %d\n", area, cir);
	
	return 0;
}