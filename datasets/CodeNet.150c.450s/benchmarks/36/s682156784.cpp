#include<stdio.h>

int main()
{
	int d,sum=0,t;
	while(scanf("%d",&d) !=EOF)
	{
		sum=0;
		t=d;
		for(t;t<600;t+=d)
		{
			sum+=t*t*d;
		}
		printf("%d\n",sum);
	}
	return 0;
}