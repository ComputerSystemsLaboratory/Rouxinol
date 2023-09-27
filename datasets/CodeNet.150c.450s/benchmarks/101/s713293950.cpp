#include <bits/stdc++.h>
using namespace std;
vector<int> G[100000];
int group[100000]={0};

void dfs(int v,int g){
	group[v] = g;
	for(int i=0;i<G[v].size();i++)
		if(!group[G[v][i]]) 
			dfs(G[v][i],g);
}

int main()
{	
	int n,m,u,v;
	cin>>n>>m;
	while(m--){
		scanf("%d%d",&u,&v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	int g = 1;
	for(int i=0;i<n;i++)
		if(!group[i]) dfs(i,g++);
	cin>>m;
	while(m--){
		scanf("%d%d",&u,&v);
		if(group[u]==group[v])
			puts("yes");
		else puts("no");
	}
	return 0;
}
