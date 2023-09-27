#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

vector<vector<int>> g;
vector<int> d, f;

void dfs(int v, int &t) {
	d[v] = t++;
	for (auto nv : g[v]) {
		if (d[nv]) continue;
		dfs(nv, t);
	}
	f[v] = t++;
}

int main() {
	int n;
	cin >> n;
	g.resize(n);
	rep(i, n) {
		int u, k;
		cin >> u >> k;
		u--;
		rep(i, k) {
			int v;
			cin >> v;
			v--;
			g[u].push_back(v);
		}
	}
	d.assign(n, 0);
	f.assign(n, 0);
	int t = 1;
	for (int i = 0; i < n; i++) {
		if (d[i]) continue;
		dfs(i, t);
	}
	rep(i, n) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
	return 0;
}
