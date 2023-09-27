#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxN = 1e5;

int cnt = 0;
vector<int> v[maxN];
vector<bool> visited(maxN, false);
vector<pair<int, int>> res;

void bfs(int node){
	cnt++;
	queue<int> q;
	q.push(node);
	visited[node] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto x: v[u]){
			if(!visited[x]){
				res.push_back({x, u + 1});
				visited[x] = true;
				cnt++;
				q.push(x);
			}
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs(0);
	if(cnt < n){
		cout << "No" << '\n';
	}else{
		cout << "Yes" << '\n';
		sort(res.begin(), res.end());
		for(auto x: res) cout << x.second << '\n';
	}
}
