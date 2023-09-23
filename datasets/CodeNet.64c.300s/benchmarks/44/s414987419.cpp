#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 200000000
int main()
{
	int e;
	while(cin >> e&&e)
	{
		int i,j,t,k,v=0,ans=INF;
		int d[10][10];
		int cost_count[10] = {0};
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				d[i][j] = INF;
				if(i==j)
				{
					d[i][j] = 0;
				}
			}
		}
		for(t=0;t<e;t++)
		{
			scanf("%d %d %d",&i,&j,&k);
			v = max(v,max(i,j));
			d[i][j] = k;
			d[j][i] = k;
		}
		for(k=0;k<=v;k++)
		{
			for(i=0;i<=v;i++)
			{
				for(j=0;j<=v;j++)
				{
					d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
				}
			}
		}
		for(i=0;i<=v;i++)
		{
			int cost = 0;
			for(j=0;j<=v;j++)
			{
				cost += d[i][j];
			}
			cost_count[i] = cost;
			ans=min(ans,cost_count[i]);

		}
		for(i=0;i<=v;i++)
		{
			if(cost_count[i]==ans)
			{
				printf("%d %d\n",i,ans);
				break;
			}
		}
	}
	return 0;
}