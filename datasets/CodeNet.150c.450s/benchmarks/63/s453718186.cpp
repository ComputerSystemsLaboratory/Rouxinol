#include <bits/stdc++.h>
using namespace std;

template <class Weight>
struct edge {
	int to;
	Weight cost;
	edge(int t, Weight c) : to(t), cost(c) {}
};

template <class Weight>
using graph = vector<vector<edge<Weight>>>;

template <class Weight>
vector<Weight> spfa(int s, const graph<Weight>& G, const Weight inf) {
	int n = G.size();
	vector<Weight> dist(n, inf);
	vector<bool> on(n);
	queue<int> q;
	dist[s] = 0;
	q.push(s);
	on[s] = true;
	while (!q.empty()) {
		auto v = q.front(); q.pop();
		on[v] = false;
		for (const auto& e : G[v]) if (dist[e.to] > dist[v] + e.cost) {
			dist[e.to] = dist[v] + e.cost;
			if (!on[e.to]) q.push(e.to), on[e.to] = true;
		}
	}
	return dist;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m, r;
	cin >> n >> m >> r;
	graph<int> G(n);
	for (int i = 0; i < m; i++) {
		int u, v, d;
		cin >> u >> v >> d;
		G[u].emplace_back(v, d);
	}
	const int INF = 1e9;
	auto dist = spfa(r, G, INF);
	for (auto d : dist) {
		if (d == INF) puts("INF");
		else printf("%d\n", d);
	}
	return 0;
}

