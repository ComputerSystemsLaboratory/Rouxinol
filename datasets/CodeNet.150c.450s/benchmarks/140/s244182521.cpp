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

//edgesToGraphUndir
pair<Weight, Edges> prim(const Graph &g, int r = 0) {
	int n = g.size();
	Edges T;
	Weight total = 0;

	vector<bool> visited(n);
	priority_queue<Edge> Q;
	Q.push(Edge(-1, r, 0));
	while (!Q.empty()) {
		Edge e = Q.top(); Q.pop();
		if (visited[e.dst]) continue;
		T.push_back(e);
		total += e.weight;
		visited[e.dst] = true;
		for(auto f : g[e.dst]) if (!visited[f.dst]) Q.push(f);
	}
	return pair<Weight, Edges>(total, T);
}

int main(void) {
	int V, E;
	cin >> V >> E;
	Edges edges;
	for (int i = 0; i < E; ++i) {
		long long s, t, w;
		cin >> s >> t >> w;
		edges.emplace_back(s, t, w);
	}
	Graph g;
	edgesToGraphUndir(edges, V, g);
	pair<Weight, Edges> p = prim(g);
	cout << p.first << endl;
	return 0;
}

