#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll inf = 1e18;
using C = ll;

class Dijkstra {
	struct edge {
		int to;
		C cost;
		edge(int to_, C cost_) : to(to_), cost(cost_) {}
	};
	bool isdir;
	vector<vector<edge>> G;
	int V;
public:
	Dijkstra(int V_, bool isdir_ = true) : isdir(isdir_), V(V_), G(V_) {}
	void add(int a, int b, C c) {
		G[a].emplace_back(b, c);
		if (!isdir) G[b].emplace_back(a, c);
	}
	vector<C> calc(int s) {
		vector<C> d(V, inf);
		using pci = pair<C, int>;
		priority_queue<pci, vector<pci>, greater<pci>> q;
		q.emplace(0, s);
		while (!q.empty()) {
			auto p = q.top(); q.pop();
			int v = p.second;
			if (d[v] < p.first) continue;
			d[v] = p.first;
			for (auto& e : G[v]) {
				if (d[e.to] > d[v] + e.cost) {
					d[e.to] = d[v] + e.cost;
					q.emplace(d[e.to], e.to);
				}
			}
		}
		return d;
	}
};

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int V, E, r;
	cin >> V >> E >> r;
	Dijkstra dk(V);
	for (int i = 0; i < E; i++) {
		int s, t;
		ll d;
		cin >> s >> t >> d;
		dk.add(s, t, d);
	}
	auto d = dk.calc(r);
	for (int i = 0; i < V; i++) {
		if (d[i] == inf) {
			puts("INF");
		}
		else {
			printf("%lld\n", d[i]);
		}
	}
	return 0;
}