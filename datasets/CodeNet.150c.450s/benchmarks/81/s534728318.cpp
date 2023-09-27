#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int t,map[12][12],sum,ans,s,i,j,k,max0,a,b,c;
	while(scanf("%d",&t) && t)
	{
		memset(map,1,sizeof(map));
		max0=0;
		for(i=0;i<t;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			map[a][b]=map[b][a]=c;
			max0=max(max0,max(a,b));
		}
	/*	printf("%d\n\n",max0);
		 for(i=0;i<=max0;i++)
		 {
		 	for(j=0;j<=max0;j++)
		 	{
		 		printf("%d  ",map[i][j]);
		 		if(j == max0)
		 			printf("\n");
			 }
		 }*/
		for(k=0;k<=max0;k++)
		{
			for(i=0;i<=max0;i++)
			{
				for(j=0;j<=max0;j++)
				{
					map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
				}
			}
		}
		sum=10000000,ans=0;
		for(i=0;i<=max0;i++)
		{
			s=0;
			for(j=0;j<=max0;j++)
			{
				if(i != j)
				{
					s+=map[i][j];
				}
			}
			if(s < sum)
			{
				sum=s;
				ans=i;
			}
		}
		printf("%d %d\n",ans,sum);
	}
}