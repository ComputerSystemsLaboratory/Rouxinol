#include<stdio.h>
#include<string.h>
#include<algorithm>
#define INF 0xfffffff
using namespace std;
int map[1100][1100];
int main()
{
	int n,m,k,i,j,a,b,c,sum1;
	while(scanf("%d",&n),n)
	{
		for(i=0;i<1100;i++)
		for(j=0;j<1100;j++)
		{
			map[i][j]=INF;
			map[i][i]=0;
		}
		int Max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d",&a,&b,&c);
			Max=max(Max,a);
			Max=max(Max,b);
			map[a][b]=c;
			map[b][a]=c;
		}
		for(k=0;k<=Max;k++)
		for(i=0;i<=Max;i++)
		for(j=0;j<=Max;j++)
		{
			if(map[i][j]>map[i][k]+map[k][j])
			map[i][j]=map[i][k]+map[k][j];
		}
		int sum=INF;
		int ans=0;
		for(i=0;i<=Max;i++)
		{
			sum1=0;
			for(j=0;j<=Max;j++)
		    {
			   sum1+=map[i][j];
		    }
		    if(sum1<sum)
			{
				sum=sum1;
				ans=i;
			}
		}
		printf("%d %d\n",ans,sum);
	}
	return 0;
}