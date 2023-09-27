#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, int>;
const ll INF = 1e12;
struct Edge {
	int from, to;
	ll cost;
	Edge() {}
	Edge(int f, int t, ll c) : from(f), to(t), cost(c) {}
};

using Edges = vector<Edge>;
using Graph = vector<Edges>;

vector<ll> Dijkstra(const Graph& G, int s) {
	int n = G.size();
	vector<ll> res(n, INF);
	priority_queue<P, vector<P>, greater<P>> pq;
	pq.emplace(0, s);
	while (!pq.empty()) {
		auto p = pq.top(); pq.pop();
		if (res[p.second] != INF) continue;
		res[p.second] = p.first;
		for (auto e : G[p.second]) {
			if (res[e.to] == INF) {
				pq.emplace(e.cost + p.first, e.to);
			}
		}
	}
	return res;
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