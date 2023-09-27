#include<bits/stdc++.h>
using namespace std;

#define pb push_back

bool visited[100005];
int path[100005];

vector<int> adj[100005];

queue<int> q;

int main() {
	memset(visited, false, sizeof(visited));
	int n, m; cin >> n >> m;
	int x, y;
	bool chk = 0;
	for(int i=1; i<=m; ++i){
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x); // bidirectional
		
		if(x==1 || y==1)
			chk = 1;
	}
	
	if(!chk){
		cout << "No";
		return 0;
	}
	
	q.push(1);
	while(q.size()){
		int x = q.front();    //bfs
		q.pop();
		if(!visited[x]){
			visited[x] = true;
			for(int i=0; i<adj[x].size(); ++i){
				q.push(adj[x][i]);
				
				if(!path[adj[x][i]])
					path[adj[x][i]] = x;
			}
		}
	}

	cout << "Yes" << "\n";
	for(int i=2; i<=n; i++)
		cout << path[i] << "\n";
	
}