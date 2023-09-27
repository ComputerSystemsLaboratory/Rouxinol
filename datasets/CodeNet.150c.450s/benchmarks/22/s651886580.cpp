#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

struct Edge {
	int s, t, d;
};

const int INF = 1 << 30;

int main() {
  int V, E, r;
	cin >> V >> E >> r;
	vector<Edge> g(E);
	rep(i, E) {
		cin >> g[i].s >> g[i].t >> g[i].d;
	}
	vector<int> ans(V, INF);
	ans[r] = 0;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < E; j++) {
			if (ans[g[j].s] == INF) continue;
			if (ans[g[j].s] + g[j].d < ans[g[j].t]) {
				ans[g[j].t] = ans[g[j].s] + g[j].d;
				if (i == V - 1) {
					cout << "NEGATIVE CYCLE" << endl;
					return 0;
				}
			}
		}
	}
	rep(i, V) {
		if (ans[i] != INF) cout << ans[i] << endl;
		else cout << "INF" << endl;
	}
	return 0;
}

