#include<bits/stdc++.h>
#define to first
#define wgt second 

using namespace std;

const int MAXN=100100;

typedef pair<int,int> pii;
typedef vector<pii> vec;
typedef vector<vec> Graph;

Graph G(MAXN);
int n,d[MAXN];

void SPFA(int s)
{
	queue<int> que;
	fill(d,d+n,INT_MAX);
	d[s]=0;
	que.push(s);
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
	int e,r;
	scanf("%d %d %d",&n,&e,&r);
	for(int i=0;i<e;i++)
	{
		int s,t,d;
		scanf("%d%d%d",&s,&t,&d);
		G[s].push_back(make_pair(t,d));
	}
	SPFA(r);
	for(int i=0;i<n;i++)
		if(d[i]==INT_MAX)
			printf("INF\n");
		else
			printf("%d\n",d[i]);
	return 0;
}