#include<stdio.h>
int main(void)
{
	int An,i,max,min,n ;
	long amount;
	max = -1000000;
	min = 1000000;
	amount = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &An);
		if (max < An)
		{
			max = An;
		}
		if (min > An)
		{
			min = An;
		}
		amount += An;
	}
	printf("%d %d %ld\n", min, max, amount);
	return 0;
}