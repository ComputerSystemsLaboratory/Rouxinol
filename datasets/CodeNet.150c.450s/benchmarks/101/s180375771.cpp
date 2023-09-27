#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
const int MAX=100005;
vector<int> G[MAX];
bool vis[MAX];
int group[MAX];
int n,m,number=0;
void dfs(int u){
	group[u]=number;
	vis[u]=1;
	for(unsigned int i=0;i<G[u].size();i++){
		if(!vis[G[u][i]])dfs(G[u][i]);
	}
}
int main(){
	int q;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i=0;i<n;i++){
			if(!vis[i]){
				dfs(i);
				number++;
			}
		}
	cin>>q;
	for(int i=0;i<q;i++){
		int u,v;
		cin>>u>>v;
		printf("%s\n",((group[u]==group[v])?"yes":"no"));
	}
}
