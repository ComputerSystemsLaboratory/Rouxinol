#include <algorithm>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> i_i;
struct edge { int v, w; };

int INF = INT_MAX / 2;

vector<int> wfs(int N, vector<vector<int> >& G, int s) {
	vector<int> d(N, INF); d[s] = 0;
	queue<int> q; q.push(s);
	while (q.size()) {
		int u = q.front(); q.pop();
		for (int v: G[u])
			if (d[v] > d[u] + 1) {
				d[v] = d[u] + 1;
				q.push(v);
			}
	}
	return d;
}

int main() {
	int N; cin >> N;
	vector<vector<int> > G(N);
	for (int i = 0; i < N; i++) {
		int u, k; cin >> u >> k;
		while (k--) {
			int v; cin >> v;
			G[u - 1].push_back(v - 1);
		}
	}
	vector<int> d = wfs(N, G, 0);
	for (int u = 0; u < N; u++) {
		if (d[u] == INF) d[u] = -1;
		cout << u + 1 << ' ' << d[u] << endl;
	}
}