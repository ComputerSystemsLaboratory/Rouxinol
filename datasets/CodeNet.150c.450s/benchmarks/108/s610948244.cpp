#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vec;
typedef vector<vec> Graph;

Graph G(110);

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int u,t;
		scanf("%d%d",&u,&t);
		for(int j=0;j<t;j++)
		{
			int v;
			scanf("%d",&v);
			G[u].push_back(v);
		}
	}
	queue<int> que;
	int d[110];
	fill(d+1,d+n+1,-1);
	d[1]=0;
	que.push(1);
	while(!que.empty())
	{
		int t=que.front();que.pop();
		for(int i=0;i<G[t].size();i++)
			if(d[G[t][i]]==-1||d[t]+1<d[G[t][i]])
			{
				d[G[t][i]]=d[t]+1;
				que.push(G[t][i]);
			}
	}
	for(int i=1;i<=n;i++)
		printf("%d %d\n",i,d[i]);
	return 0;
}