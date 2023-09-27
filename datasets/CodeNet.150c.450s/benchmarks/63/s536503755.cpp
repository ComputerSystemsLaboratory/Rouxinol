#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Cost = ll;

const Cost INF = 1e12;
using P = pair<Cost, int>;

struct Edge {
	int from, to;
	Cost cost;
	Edge() {}
	Edge(int f, int t, Cost c) : from(f), to(t), cost(c) {}
};

using Edges = vector<Edge>;
using Graph = vector<Edges>;

vector<Cost> Dijkstra(const Graph& G, int s) {
	int n = G.size();
	vector<Cost> d(n, INF);
	priority_queue<P, vector<P>, greater<P>> pq;
	pq.emplace(0, s);
	d[s] = 0;
	while (!pq.empty()) {
		auto p = pq.top(); pq.pop();
		if (p.first > d[p.second]) continue;
		for (auto e : G[p.second]) if (d[e.to] > p.first + e.cost) {
			pq.emplace(p.first + e.cost, e.to);
			d[e.to] = p.first + e.cost;
		}
	}
	return d;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int V, E, r;
	cin >> V >> E >> r;
	Graph G(V);
	for (int i = 0, s, t, d; i < E; i++) {
		cin >> s >> t >> d;
		G[s].emplace_back(s, t, d);
	}
	auto res = Dijkstra(G, r);
	for (auto ans : res) {
		if (ans == INF) puts("INF");
		else printf("%d\n", (int)ans);
	}
	return 0;
}