#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
  
int main()
{

	int sum=0;
	int n;
	int max;
	int min;
	int i;
	int m;


	while(1)
	{
	scanf("%d",&n);
	if(n==0)
		break;

	max=0;
	min=1000;
	sum=0;

	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		sum+=m;
		if(m>max)
			max=m;
		if(m<min)
			min=m;
	}

	sum = sum-max-min;

	printf("%d\n",(sum/(n-2)));
	}

	return 0;
}