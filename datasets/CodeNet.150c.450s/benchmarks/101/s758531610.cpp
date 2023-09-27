#include <iostream>
#include <cstdio>
using namespace std;

const int maxm = 100000 + 5;
const int maxn = 100000 + 5;

struct Edge{
	int to,next;
}G[maxm<<1];

int head[maxn],cnt = 0;
int color[maxn];
bool vis[maxn];

void Insert(int u,int v){
	G[++cnt].next = head[u];
	G[cnt].to = v;
	head[u] = cnt;
}

void Dfs(int u,int c){
	vis[u] = true;
	color[u] = c;
	for(int e = head[u];e; e = G[e].next){
		int v = G[e].to;
		if(!vis[v]){
			Dfs(v,c);
		}
	}
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= m; i++){
		int u,v;
		scanf("%d%d",&u,&v);
		Insert(u,v);
		Insert(v,u);
	}
	for(int i = 1;i <= n; i++){
		if(!vis[i]){
			Dfs(i,i);	
		}
	}
	int q;
	scanf("%d",&q);
	for(int i = 1;i <= q; i++){
		int u,v;
		scanf("%d%d",&u,&v);
		if(color[u] == color[v])printf("yes\n");
		else printf("no\n");
	}
}