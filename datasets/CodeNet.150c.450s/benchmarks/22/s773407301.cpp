#include <bits/stdc++.h>
using namespace std;

#define INF 1LL << 60

using Weight = long long;
struct Edge {
	int src, dst;
	Weight weight;
	Edge(int src_, int dst_, Weight weight_) : src(src_), dst(dst_), weight(weight_) { }
};
bool operator<(const Edge &e, const Edge &f) {
	return e.weight != f.weight ? e.weight > f.weight : e.dst < f.dst;
}
using Edges = vector<Edge>;
using Graph = vector<Edges>;

void edgesToGraph(const Edges &edges, int V, Graph &g) {
	g.resize(V);
	for (auto e : edges) g[e.src].push_back(e);
}

void edgesToGraphUndir(const Edges &edges, int V, Graph &g) {
	g.resize(V);
	for (auto e : edges) {
		g[e.src].push_back(e);
		g[e.dst].push_back(Edge(e.dst, e.src, e.weight));
	}
}

bool bellmanford(const Graph g, int start,
	vector<Weight> &dist, vector<int> &prev) {
	int V = g.size();
	dist.assign(V, INF); dist[start] = 0;
	prev.assign(V, -2);
	bool negative_cycle = false;
	for (int k = 0; k < V; ++k) for (int i = 0; i < V; ++i) for (auto e : g[i]) {
		if (dist[e.src] == INF) continue;
		if (dist[e.dst] > dist[e.src] + e.weight) {
			dist[e.dst] = dist[e.src] + e.weight;
			prev[e.dst] = e.src;
			if (k == V - 1) {
				dist[e.dst] = -INF;
				negative_cycle = true;
			}
		}
	}
	return negative_cycle;
}

vector<int> buildPath(const vector<int> &prev, int end) {
	vector<int> path;
	for (int u = end; u >= 0; u = prev[u])
		path.push_back(u);
	reverse(path.begin(), path.end());
	return path;
}

int main(void) {
	int V, E, r;
	cin >> V >> E >> r;
	Edges edges;
	for (int i = 0; i < E; ++i) {
		long long s, t, d;
		cin >> s >> t >> d;
		edges.emplace_back(s, t, d);
	}
	Graph g;
	edgesToGraph(edges, V, g);

	vector<Weight> dist;
	vector<int> prev;
	bool nc = bellmanford(g, r, dist, prev);
	if (nc) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	for (auto d : dist) {
		if (d >= INF)cout << "INF" << endl;
		else cout << d << endl;
	}
	return 0;
}

