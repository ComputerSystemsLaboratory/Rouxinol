#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (b > c) {
		d = b;
		b = c;
		c = d;
	}
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	
	printf("%d %d %d\n", a, b, c);
	
	return (0);
}