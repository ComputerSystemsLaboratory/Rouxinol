#include <bits/stdc++.h>
using namespace std;
using Int = int_fast64_t;

class edge{
public:
	Int cost;
	size_t from, to;
	edge(Int c, size_t f, size_t t){
		cost = c;
		from = f;
		to = t;
	}
};
using edges = vector<edge>;
using graph = vector<edges>;
void readgraph(graph &g, size_t E, bool D, bool C, bool Z){ // E:num_of_edges, D:directed, C:costed, Z:already 0-indexed
	for(size_t i=0; i<E; ++i){
		edge e(1, 0, 0);
		if(!C) cin >> e.from >> e.to;
		else cin >> e.from >> e.to >> e.cost;
		if(!Z){
			--e.from;
			--e.to;
		}
		g[e.from].push_back(e);
		if(!D){
			swap(e.from, e.to);
			g[e.from].push_back(e);
		}
	}
}
bool bellman_ford(graph &g, Int s, vector<Int> &d){
	d.resize(g.size(), 1e18);
	d[s] = 0;
	bool updated = false;
	for(size_t i=0; i<g.size(); ++i){
		updated = false;
		for(edges j:g)
			for(edge k:j)
				if((d[k.from] + k.cost < 1e18 / 2) && d[k.from] + k.cost < d[k.to]){
					d[k.to] = d[k.from] + k.cost;
					updated = true;
				}
		if(!updated) break;
	}
	return updated;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	Int v, e, s; cin >> v >> e >> s;
	graph g(v);
	readgraph(g, e, true, true, true);
	vector<Int> dist;
	if(bellman_ford(g, s, dist)){
		cout << "NEGATIVE CYCLE\n";
		return 0;
	}
	for(auto i:dist) cout << (i > 1e18 / 2 ? "INF" : to_string(i)) << "\n";
}
