#include<cstdio>

int DP[31];
int w,n;


int main()
{
	for(int i=0;i<31;i++)
	{
		DP[i]=i;
	}
	scanf("%d%d",&w,&n);
	int a,b,c;
	for(int i=0;i<n;i++)
	{
		scanf("%d,%d",&a,&b);
		c= DP[a];
		DP[a]=DP[b];
		DP[b]=c;
	}
	for(int i=1;i<w+1;i++)
	{
		printf("%d\n",DP[i]);
	}
}