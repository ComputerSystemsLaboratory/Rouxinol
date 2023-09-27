#include<bits/stdc++.h>

using namespace std;

void calc(int n,int s,vector<int> adj[],vector<int> &u){
	u[s] = s;
	vector<bool> visited(n,false);
	priority_queue<int> np;
	np.push(s);
	while(!np.empty()){
		int now = np.top(); np.pop();
		visited[now] = true;
		for(int i = 0; i < adj[now].size(); ++i){
			int next = adj[now][i];
			if(visited[next])continue;
			np.push(next);
			u[next] = s;
		}
	}
	return;
}


int main(){
	int n,m; cin >> n >> m;
	vector<int> adj[n];
	for(int i = 0; i < m; ++i){
		int s,t; cin >> s >>t;
		adj[s].push_back(t);
		adj[t].push_back(s);
	}
	vector<int> u(n,-1);
	for(int i = 0; i < n; i++){
		if(u[i] != -1)continue;
		calc(n,i,adj,u);
	}
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int s,t; cin >> s >> t;
		if(u[s] == u[t])cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}