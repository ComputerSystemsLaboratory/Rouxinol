#include <bits/stdc++.h>
using namespace std;

const int INF = 1'000'000'000;

using Weight=int;
using P=pair<Weight, int>;
struct Edge { int to; Weight cost; };

bool BellmanFord(const vector<vector<Edge>>& graph, vector<Weight>& dist, int s) {
	int V = graph.size();
	dist.assign(V, INF); dist[s] = 0;
	for (int i = 0; i < V; i++)
		for (int v = 0; v < V; v++)
			for (auto e : graph[v]) {
				if (dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
					dist[e.to] = dist[v] + e.cost;
					if (i == V - 1)return true;
				}
			}
	return false;
}

int main() {
	int v, e, r;
	cin >> v >> e >> r;
	vector<vector<Edge>> g(v);
	for (int i = 0; i < e; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		g[s].push_back({ t,d });
	}

	vector<int> d;
	bool flag = BellmanFord(g, d, r);

	if (flag) {
		puts("NEGATIVE CYCLE");
	}
	else {
		for (auto aa : d) {
			if (aa == INF)puts("INF");
			else cout << aa << endl;
		}
	}
}
