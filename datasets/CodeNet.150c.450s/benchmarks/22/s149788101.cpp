#include <bits/stdc++.h>
using namespace std;

template <class Weight>
struct edge {
	int to;
	Weight cost;
	edge(int t, Weight c) : to(t), cost(c) {}
};

template <class Weight>
using edges = vector<edge<Weight>>;

template <class Weight>
using graph = vector<edges<Weight>>;

template <class Weight>
vector<Weight> bellman_ford(int s, const graph<Weight>& G, const Weight inf) {
	int n = G.size();
	vector<Weight> dist(n, inf);
	dist[s] = 0;
	bool upd;
	for (int i = 0; i < n; i++) {
		upd = false;
		for (int v = 0; v < n; v++) {
			for (auto& e : G[v]) if (dist[v] != inf && dist[e.to] > dist[v] + e.cost) {
				dist[e.to] = dist[v] + e.cost;
				upd = true;
			}
		}
		if (!upd) return dist;
	}
	dist.clear();
	return dist;
}

const int INF = 1e9;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m, r;
	cin >> n >> m >> r;
	graph<int> G(n);
	for (int i = 0; i < m; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s].emplace_back(t, d);
	}
	auto dist = bellman_ford(r, G, INF);
	if (dist.empty()) {
		puts("NEGATIVE CYCLE");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (dist[i] == INF) puts("INF");
		else printf("%d\n", dist[i]);
	}
	return 0;
}

