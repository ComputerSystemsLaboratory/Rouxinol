#include<stdio.h>
#include <math.h>
int prime(int num)
{
	if(num == 1)
	{
		return 0;
	}
	int tmp = sqrt(num) + 1;
	for(int i = 2; i < tmp; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	
	
	printf("%d:",n);
	if(prime(n))
	{
		printf(" %d\n", n);
		return 0;
	}
	for(i=2;n!=1;)
	{
		if(n%i!=0)
		{
			//if(n==2)
			i++;
			//else
			//i+=2;
		}
		else
		{
			printf(" %d",i);
			n/=i;
		}
	}
	printf("\n");
	
}
