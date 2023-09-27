#include<stdio.h>
int main() 
{
	int a,b,c,n;
	n = 0;
	scanf("%d %d %d", &a, &b, &c);
	while (1)
	{
		if (c % a == 0)
		{
			n = n + 1;
		}
		if (b - a == 0) break;
		a = a + 1;
	}
	printf("%d\n", n);
	return 0;
}