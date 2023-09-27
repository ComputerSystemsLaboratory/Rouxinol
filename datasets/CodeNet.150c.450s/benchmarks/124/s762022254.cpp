#include<bits/stdc++.h>
#define to first
#define wgt second 

using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> vec;
typedef vector<vec> Graph;

Graph G(11000);
int n,d[11000];

void SPFA()
{
	bool used[11000];
	queue<int> que;
	memset(used,false,sizeof(used));
	fill(d,d+n,INT_MAX);
	d[0]=0;
	que.push(0);
	while(!que.empty())
	{
		int u=que.front();que.pop();
		for(int i=0;i<G[u].size();i++)
			if(d[G[u][i].to]>d[u]+G[u][i].wgt)
			{
				d[G[u][i].to]=d[u]+G[u][i].wgt;
				que.push(G[u][i].to);
			}
	}
}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int u,t;
		scanf("%d%d",&u,&t);
		for(int j=0;j<t;j++)
		{
			int v,w;
			scanf("%d%d",&v,&w);
			G[u].push_back(make_pair(v,w));
		}
	}
	SPFA();
	for(int i=0;i<n;i++)
		printf("%d %d\n",i,d[i]);
	return 0;
}