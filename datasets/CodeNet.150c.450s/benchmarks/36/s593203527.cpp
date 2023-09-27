#include <stdio.h>
int main(void)
{
	int d,count,sum;
	while(~scanf("%d",&d))
	{
		for(count=0,sum=0;count<600;count+=d)
		{
			sum+=count*count*d;
		}
		printf("%d\n",sum);
	}
}