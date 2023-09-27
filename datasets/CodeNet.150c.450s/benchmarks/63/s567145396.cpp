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

void dijkstra(const Graph &g, int start,
	vector<Weight> &dist, vector<int> &prev) {
	size_t V = g.size();
	dist.assign(V, INF); dist[start] = 0;
	prev.assign(V, -1);
	priority_queue<Edge> q;
	for (q.push(Edge(-2, start, 0)); !q.empty(); ) {
		Edge e = q.top(); q.pop();
		if (prev[e.dst] != -1) continue;
		prev[e.dst] = e.src;
		for (auto a : g[e.dst]) {
			if (dist[a.dst] > e.weight + a.weight) {
				dist[a.dst] = e.weight + a.weight;
				q.push(Edge(a.src, a.dst, e.weight + a.weight));
			}
		}
	}
}

vector<int> buildPath(const vector<int> &prev, int end) {
	vector<int> path;
	for (int u = end; u >= 0; u = prev[u])
		path.push_back(u);
	reverse(path.begin(), path.end());
	return path;
}

int main() {
	int V, E, r; //頂点数
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

	dijkstra(g, r, dist, prev);

	for (int i = 0; i < dist.size(); ++i) {
		if (dist[i] == INF) {
			cout << "INF" << endl;
		}
		else {
			cout << dist[i] << endl;
		}
	}
	return 0;
}
