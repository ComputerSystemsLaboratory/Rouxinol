#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1e9+7;
const ll N=1e5+1;
const ll INF=1e10;
const double PI=acos(-1.0);

int n,m;
vector<vector<int>> adj(N);
vector<bool> visited(N);
vector<int> parent(N);

void bfs(){
	queue<int> q;
	q.push(1);
	visited[1]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int v:adj[t]){
			if(!visited[v]){
				visited[v]=true;
				q.push(v);
				parent[v]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cout<<"No";
			return;
		}
	}
	cout<<"Yes\n";
	for(int i=2;i<=n;i++) cout<<parent[i]<<'\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n>>m;
	while(m--){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs();
}
