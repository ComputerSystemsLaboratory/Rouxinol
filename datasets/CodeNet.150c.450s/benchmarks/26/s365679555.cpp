#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);

	if (a > b)
	    printf("a > b\n", a, b);
	if (b > a)
		printf("a < b\n", a, b);
	if (a == b)
		printf("a == b\n", a, b);


	return 0;
}