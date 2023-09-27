#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF 1<<30
#define LINF 1LL<<60

class Bellman_ford {
public:
	struct edge {
		ll u;
		ll v;
		ll cost;
		edge() {}
		edge(ll u, ll v, ll c) :u(u), v(v), cost(c) {}
	};

	ll V;
	vector<vector<edge>> G;
	vector<ll> dist;
	Bellman_ford(ll V) :V(V) {
		G.resize(V);
	}

	void add_edge(ll u, ll v, ll cost, bool undirected = false) {
		G[u].push_back(edge(u, v, cost));
		if (undirected) {
			G[v].push_back(edge(v, u, cost));
		}
	}

	bool calc_dist(ll s) {
		dist.assign(V, INF);
		dist[s] = 0;

		for (int i = 0; i < V;i++) {
			for (int v = 0; v < V;v++) {
				for (auto e : G[v]) {
					if (dist[v] != INF && dist[e.v] > dist[v] + e.cost) {
						dist[e.v] = dist[v] + e.cost;
						if (i == V - 1) return true; // ????????????
					}
				}
			}
		}
		return false;
	}

	inline ll get_dist(ll v) const { return dist[v]; }
};

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	ll V, E, r; cin >> V >> E >> r;
	Bellman_ford Bf(V);
	for (int i = 0; i < E;i++) {
		ll s, t, d; cin >> s >> t >> d;
		Bf.add_edge(s, t, d);
	}
	if (Bf.calc_dist(r)) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < V;i++) {
			if (Bf.get_dist(i) == INF) {
				cout << "INF" << endl;
			}
			else {
				cout << Bf.get_dist(i) << endl;
			}
		}
	}
	return 0;
}