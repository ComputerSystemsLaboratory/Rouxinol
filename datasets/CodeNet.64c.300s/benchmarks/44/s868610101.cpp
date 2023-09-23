#include<stdio.h>
#include<string.h>
#define INF 0x3f3f3f
int max(int a,int b)
{
	return a>b?a:b;
}
int map[110][110],visit[110],vis[110];
int n,m;
int dijkstra(int a)
{
	memset(visit,0,sizeof(visit));
	int i,j,next,sum,min;
	for(i=0;i<m;i++)
	vis[i]=map[a][i];
	visit[a]=1;
	for(i=0;i<m;i++)
	{
		min=INF;
		for(j=0;j<m;j++)
		{
			if(!visit[j]&&min>vis[j])
			{
				next=j;
				min=vis[j];
			}
		}
		visit[next]=1;
		for(j=0;j<m;j++)
			if(!visit[j]&&vis[j]>vis[next]+map[next][j])
			vis[j]=vis[next]+map[next][j];
	}
	sum=0;
	for(i=0;i<m;i++)
	sum+=vis[i];
	return sum;
}
int main()
{
	int i,j,sum;
	int a,b,c;
	while(scanf("%d",&n),n)
	{
		for(i=0;i<110;i++)
		for(j=i;j<110;j++)
		{
			if(i==j)
			map[i][j]=map[j][i]=0;
			else
			map[i][j]=map[j][i]=INF;
		}
		m=0;
		while(n--)
		{
			scanf("%d%d%d",&a,&b,&c);
			map[a][b]=map[b][a]=c;
			m=max(m,max(a,b)+1);
		}
		sum=INF;
		for(i=0;i<m;i++)
		{
			if(sum>dijkstra(i))
			{
				j=i;
				sum=dijkstra(i);
			}			
		}
		printf("%d %d\n",j,sum);
	}
	return 0;
}