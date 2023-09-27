#include<bits/stdc++.h>
#define to first
#define wgt second 

using namespace std;

const int MAXN=1010;

typedef pair<int,int> pii;
typedef vector<pii> vec;
typedef vector<vec> Graph;

Graph G(MAXN);
int n,d[MAXN],times[MAXN];
bool negative_cycle; 

void SPFA(int s)
{
	queue<int> que;
	negative_cycle=false;
	memset(times,0,sizeof(times));
	fill(d,d+n,INT_MAX);
	d[s]=0;
	times[s]=1;
	que.push(s);
	while(!que.empty())
	{
		int u=que.front();que.pop();
		for(int i=0;i<G[u].size();i++)
			if(d[G[u][i].to]>d[u]+G[u][i].wgt)
			{
				d[G[u][i].to]=d[u]+G[u][i].wgt;
				que.push(G[u][i].to);
				times[G[u][i].to]++;
				if(times[G[u][i].to]>n)
				{
					negative_cycle=true;
					while(que.empty()) que.pop();
					return ;
				}
			}
	}
}

int main()
{
	int e,r;
	scanf("%d%d%d",&n,&e,&r);
	for(int i=0;i<e;i++)
	{
		int s,t,d;
		scanf("%d%d%d",&s,&t,&d);
		G[s].push_back(make_pair(t,d));
	}
	SPFA(r);
	if(negative_cycle)
		printf("NEGATIVE CYCLE\n");
	else
		for(int i=0;i<n;i++)
			if(d[i]==INT_MAX)
				printf("INF\n");
			else
				printf("%d\n",d[i]);
	return 0;
}