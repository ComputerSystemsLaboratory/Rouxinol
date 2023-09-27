#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vec;
typedef vector<vec> Graph;

Graph G(110);
int T,In[110],Out[110];
bool used[110];

void dfs(int x)
{
	used[x]=true;
	In[x]=++T;
	for(int i=0;i<G[x].size();i++)
		if(!used[G[x][i]])
			dfs(G[x][i]);
	Out[x]=++T;
}

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
	memset(used,false,sizeof(used));
	T=0;
	for(int i=1;i<=n;i++)
		if(!used[i])
			dfs(i);
	for(int i=1;i<=n;i++)
		printf("%d %d %d\n",i,In[i],Out[i]);
	return 0;
}