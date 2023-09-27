#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb emplace_back
typedef pair<int,int> pi;

int n, m, dist[100005], par[100005];
vector<int> g[100005];
bool ok = true;

void bfs() {
	queue<int> q;
	memset(dist, -1, sizeof dist);
	dist[1] = 0;
	q.emplace(1);
	while (q.size()) {
		int x = q.front();
		q.pop();
		for (auto i: g[x]) {
			if (dist[i] != -1) continue;
			dist[i] = dist[x] + 1;
			par[i] = x;
			q.emplace(i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}
	bfs();
	for (int i = 2; i <= n; ++i) {
		if (dist[i] == -1) {
			ok = false;
			break;
		}
	}
	if (!ok) {
		cout << "No";
		return 0;
	}
	cout << "Yes\n";
	for (int i = 2; i <= n; ++i) cout << par[i] << '\n';
	return 0;
}
