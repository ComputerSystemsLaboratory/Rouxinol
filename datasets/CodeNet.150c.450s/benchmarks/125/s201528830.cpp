#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int n, u, k, v;
int d[101], f[101];
pair<int, vector<int>> G[101];

int ti = 1;

void dfs(int id) {
	d[id] = ti ++;

	vector<int>& adj = G[id].second;
	for (int i=0, l=adj.size(); i<l; ++i) {
		if ( ! d[adj[i]]) {
			dfs(adj[i]);
		}
	}
	f[id] = ti ++;
}

int main() {
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> u >> k;
		G[u].first = u;
		while (k --) {
			cin >> v;
			G[u].second.push_back(v);
		}
	}
	for (int i=1; i<=n; ++i) {
		if ( ! d[i]) {
			dfs(i);
		}
	}

	for (int i=1; i<=n; ++i) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}