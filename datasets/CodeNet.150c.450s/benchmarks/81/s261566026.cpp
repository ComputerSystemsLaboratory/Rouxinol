#include<cstdio>
#include<algorithm>
#define N 11
#define inf 10000000
using namespace std;
int d[N][N],V;
void warshall_floyd(void)
{
	for(int k=0;k<=V;k++)
	{
		for(int i=0;i<=V;i++)
		{
			for(int j=0;j<=V;j++)
			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		}
	}
	return ;
}
void init(void)
{
	for(int i=0;i<N;i++)
	fill(d[i],d[i]+N,inf);
	for(int i=0;i<N;i++)
	d[i][i]=0;
	return ;
}
int main(void)
{
	int n;
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		break;
		init();
		int s,e,c;
		V=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d",&s,&e,&c);
			d[s][e]=d[e][s]=c;
			V=max(V,max(s,e));
		}
		warshall_floyd();
		int ans=inf;
		int sum=0;
		int id=0;
		for(int i=0;i<=V;i++)
		{
			sum=0;
			for(int j=0;j<=V;j++)
			sum+=d[i][j];
			if(sum<ans)
			{
				ans=sum;
				id=i;
			}
		}
		printf("%d %d\n",id,ans);
	}
	return 0;
}