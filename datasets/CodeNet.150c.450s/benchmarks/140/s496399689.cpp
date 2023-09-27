#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
	int from, to, cost;
	Edge() { }
	Edge(int from, int to, int cost) {
		this->from = from;
		this->to = to;
		this->cost = cost;
	}
	bool operator<(const Edge &r) const {
		return cost < r.cost;
	}
};

struct UF {
	int par[10000];
	UF() { for (int i = 0; i < 10000; i++) par[i] = i; }
	int root(int x) { if (par[x] == x) return x; return par[x] = root(par[x]); }
	void unit(int x, int y) { x = root(x); y = root(y); par[x] = y; }
	bool same(int x, int y) { return root(x) == root(y); }
};

int n, m;
Edge edges[100000];
UF uf;

int main() {
	int i;
	
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		int s, t, w;
		cin >> s >> t >> w;
		edges[i] = Edge(s, t, w);
	}
	
	sort(edges, edges + m);
	
	int ans = 0;
	for (i = 0; i < m; i++) {
		int u = edges[i].from;
		int v = edges[i].to;
		if (uf.same(u, v)) continue;
		uf.unit(u, v);
		ans += edges[i].cost;
	}
	
	cout << ans << endl;
	return 0;
}
