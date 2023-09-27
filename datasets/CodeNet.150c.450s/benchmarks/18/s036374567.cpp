#include<stdio.h>
int main(void) {
	int  a=100000,c;
	double b = 100000;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		b*= 1.05;
		a = b;
		if (a % 1000 != 0)
		{
			b = (b - (a % 1000)) + 1000;
		}
		a = b;
	}
	printf("%d\n",a);
	return 0;
}