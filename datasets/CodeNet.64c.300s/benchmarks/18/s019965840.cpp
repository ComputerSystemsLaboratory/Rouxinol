#include <stdio.h>



long memo[31];

long fanc(int flo)
{
	int i;
	long sum=0;
	if(flo<0){return 0;}
	if(memo[flo]!=0){return memo[flo];}

	for(i=1;i<=3;i++)
	{
		sum+=fanc(flo-i);
	}
	
	return memo[flo]=sum;
}
int main()
{
	long int num;
	int n;
	int i;
	int ans;
	
	for(i=0;i<31;i++)
	{
		memo[i]=0;
	}
	memo[0]=1;
	while(scanf("%d",&n)&&n!=0)
	{
		num=fanc(n);
		ans=num/3650 + !!(num % 3650);
		
		printf("%d\n",ans);
	}
}