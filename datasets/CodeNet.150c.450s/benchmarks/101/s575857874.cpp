//By Vlgd
//By Vlgd
#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int n,m,d[N],t=0;
vector<int>G[N];
stack<int>S;
void dfs(int r,int cnt){
	S.push(r);
	d[r]=cnt;
	while(!S.empty()){
		int u=S.top();S.pop();
		for (int i=0;i<G[u].size();i++){
			int v=G[u][i];
			if (d[v]==-1){
				d[v]=cnt;
				S.push(v);
			}
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int u,v;
	for (int i=0;i<m;i++){
		scanf("%d%d",&u,&v);
		G[u].push_back(v);
		G[v].push_back(u); 
	}
	memset(d,-1,sizeof(d));
	for (int i=0;i<n;i++) if (d[i]==-1) dfs(i,t++);
	int q;
	scanf("%d",&q);
	for (int i=0;i<q;i++){
		scanf("%d%d",&u,&v);
		if (d[u]==d[v]) printf("yes\n");
		else printf("no\n");
	} 
} 
