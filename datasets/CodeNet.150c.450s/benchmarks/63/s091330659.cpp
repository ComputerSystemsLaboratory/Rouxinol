#include <bits/stdc++.h>
using namespace std;

const int INF = 1'000'000'000;

using Weight=int;
using P=pair<Weight, int>;
struct Edge { int to; Weight cost; };

void Dijkstra(const vector<vector<Edge>>& graph, vector<Weight>& dist, int s) {
	int V = graph.size();
	dist.assign(V, INF); dist[s] = 0;

	priority_queue<P, vector<P>, greater<P>> pq;
	pq.push({ 0,s });

	while (!pq.empty()) {
		P p = pq.top(); pq.pop(); int v = p.second;
		if (dist[v] < p.first)continue;
		for (auto e : graph[v]) {
			if (dist[e.to] > dist[v] + e.cost) {
				dist[e.to] = dist[v] + e.cost;
				pq.push({ dist[e.to],e.to });
			}
		}
	}
}

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<vector<Edge>> graph(V);
	vector<int> dist;

	for (int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].push_back({ t,d });
	}

	Dijkstra(graph, dist, r);

	for (auto d : dist) {
		if (d == INF)puts("INF");
		else cout << d << endl;
	}
}
