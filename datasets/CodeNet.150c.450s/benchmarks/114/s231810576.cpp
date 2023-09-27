#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define maxn 101
#define Max 10000 
using namespace std;
int n,ans=0;
int map[maxn][maxn];

//struct edge
//{
//	int u;
//	int w;
//	edge(int u=0,int w=Max):u(u),w(w){}
//	bool operator <???(const node& rhs) const
//	{
//		return w>rhs.w;
//	} 
//};

void prim()
{
	int d[maxn];
	bool vis[maxn];
	memset(vis,0,sizeof(vis));
	for(int i=1;i<=n;++i)
	{
		d[i]=Max;
		vis[i]=0;
	}
	d[1]=0;
	while(1)
	{
		int MIN=Max;
		int u=-1;
		for(int i=1;i<=n;++i)
			if(MIN>d[i]&&!vis[i])
			{
				MIN=d[i];
				u=i;
			}
		if(u==-1) break;
		vis[u]=1;
		ans+=d[u];
		for(int i=1;i<=n;++i)
		{
			if(!vis[i] && map[u][i]!=Max)
			  if(d[i]>map[u][i])
			  	d[i]=map[u][i];
		}
	}
	return;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	  for(int j=1;j<=n;++j)
	  {
	  	int x;
	  	scanf("%d",&x);
	  	if(x!=-1)
	  	  map[i][j]=x;
	  	else
	  	  map[i][j]=Max;
	  }
	prim();
	printf("%d\n",ans);
	return 0;
} 