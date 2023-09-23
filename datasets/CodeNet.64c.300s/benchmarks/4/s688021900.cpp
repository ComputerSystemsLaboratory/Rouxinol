#include<stdio.h>

int main(void)
{
	int  a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b && b < c)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	putchar('\n');

	return 0;

}