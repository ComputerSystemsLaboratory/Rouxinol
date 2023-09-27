#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main(void)
{
	int a, b, c, min, cen, max;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c){
		max = a;
	}
	if (b >= a && b >= c){
		max = b;
	}
	if (c >= a && c >= b){
		max = c;
	}
	
	if (a <= b && a <= c){
		min = a;
	}
	if (b <= a && b <= c){
		min = b;
	}
	if (c <= a && c <= b){
		min = c;
	}

	if ((a >= b && a <= c) || (a >= c && b >= a)){
		cen = a;
	}
	if ((b >= c && a >= b) || (b >= a && c >= b)){
		cen = b;
	}
	if ((c >= a && b >= c) || (a >= c && c >= b)){
		cen = c;
	}

	printf("%d %d %d\n", min, cen, max);

	return 0;
}