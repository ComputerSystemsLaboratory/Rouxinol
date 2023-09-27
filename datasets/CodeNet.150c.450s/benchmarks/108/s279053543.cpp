#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> g(n);
	rep(i, n) {
		int u, k;
		cin >> u >> k;
		u--;
		rep(j, k) {
			int v;
			cin >> v;
			v--;
			g[u].push_back(v);
		}
	}
	vector<int> d(n, -1);
	d[0] = 0;
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (auto nv : g[v]) {
			if (d[nv] != -1) continue;
			d[nv] = d[v] + 1;
			q.push(nv);
		}
	}
	rep(i, n) cout << i + 1 << " " << d[i] << endl;
	return 0;
}
