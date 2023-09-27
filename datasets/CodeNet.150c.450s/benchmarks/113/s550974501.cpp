#include<stdio.h>
int main() 
{
	int num[10000],n;
	n = 0;
	while (1) 
	{
		scanf("%d", &num[n]);
		if (num[n] == 0) break;
			n = n + 1;
	}
	n = 0;
	while (num[n] != 0)
	{
		printf("Case %d: %d\n", n+1, num[n]);
		n = n + 1;
	}
	return 0;
}