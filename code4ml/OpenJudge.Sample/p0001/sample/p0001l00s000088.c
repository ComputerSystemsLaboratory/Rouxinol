#include<stdio.h>

#define DATESET		3

int main(void)
{
	int i = 0;
	int a[DATESET];
	int b[DATESET];
	int sum[DATESET];
	int keta[DATESET];

	for(i = 0; i < DATESET; i++)
	{	
		keta[i] = 0;

		do
		{
			scanf("%d %d", &a[i], &b[i]);
			sum[i] = a[i] + b[i];
		}
		while(a[i] < 0 || a[i] > 1000000 || b[i] < 0 || b[i] > 1000000);

		while(sum[i] >= 1)
		{
			sum[i] /= 10;
			keta[i]++;
		}
	

		
	}

	for(i = 0; i < DATESET; i++)
	{
		printf("%d\n", keta[i]);
	}

	return 0;
}