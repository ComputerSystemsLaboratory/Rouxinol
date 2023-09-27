/*??????3-2*/
#include<stdio.h>
int main(void)
{
	int i,n;
	int number;
	long long int sum=0;
	int min=0;
	int max=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&number);
		
		if(i==0)
		{
			min = number;
			max = number;
		}
		if(number<min) min = number;
		if(number>max) max = number;
		
		sum += number;
	}
	
	printf("%d %d %lld\n",min,max,sum);
	
	return 0;
		
}