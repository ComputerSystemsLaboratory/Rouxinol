#include<stdio.h>

int main()
{
	long i,n,ai;
	long max=-1000001,min=1000001,sum=0;
	scanf("%ld",&n);

	for (i = 0; i < n; i++)
	{
		scanf("%ld",&ai);
		
		if (max < ai)
		{
			max=ai;
		}
		if (min > ai)
		{
			min=ai;
		}
		
		sum+=ai;
	}

	printf("%ld %ld %ld\n",min,max,sum);
	
	return 0;
}