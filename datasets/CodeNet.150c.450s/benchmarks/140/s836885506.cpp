#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#pragma GCC optimize ("Ofast")
#include <cstdio>
#include <cctype>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)

// inline int gc()noexcept { return getchar_unlocked(); }
inline int gc()noexcept { return getchar(); }
inline int in()noexcept {
	int v = 0; char c = gc();
	for (; isdigit(c); c = gc()) {
		v *= 10;
		v += c - '0';
	}
	return v;
}

using Weight = int;
constexpr Weight INF = numeric_limits<Weight>::max();
struct Edge {
	int to; Weight cost;
	Edge() :to(-1), cost(-1) {}
	Edge(int _to, Weight _cost = 1) :to(_to), cost(_cost) {}
};
bool operator>(const Edge& e1, const Edge& e2) { return e1.cost > e2.cost; }
struct Edge2 {
	int u, v; Weight cost;
	Edge2() :u(-1), v(-1), cost(0) {}
	Edge2(int _u, int _v, Weight _cost) :u(_u), v(_v), cost(_cost) {}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;
using Array = vector<Weight>;
using Matrix = vector<Array>;
using UnWeightedGraph = vector<vector<int>>;

class UnionFind {
	vector<int> par, sz;
public:
	UnionFind(int n = 1) {
		init(n);
	}
	void init(int n) {
		par.resize(n); sz.resize(n);
		for (int i = 0; i < n; i++)par[i] = i, sz[i] = 1;
	}
	int root(int x) {
		if (par[x] == x)return x;
		else return par[x] = root(par[x]);
	}
	bool same(int x, int y) {
		return root(x) == root(y);
	}
	int size(int x) {
		return sz[root(x)];
	}
	bool unite(int x, int y) {
		x = root(x); y = root(y);
		if (x == y)return false;
		par[y] = x;
		sz[x] += sz[y];
		return true;
	}
};

Weight Kruskal(int V, vector<Edge2>& graph) {
	sort(graph.begin(), graph.end(),
		[](const Edge2& e1, const Edge2& e2) {return e1.cost < e2.cost; });
	int E = graph.size(); Weight res = 0;
	UnionFind uf(V);
	for (auto e : graph) {
		if (uf.unite(e.u, e.v)) {
			res += e.cost;
		}
	}
	return res;
}

int main() {
	int n = in(), m = in();
	vector<Edge2> edges;
	rep(i, m) {
		int a = in(), b = in(); Weight c = in();
		edges.emplace_back(a, b, c);
		edges.emplace_back(b, a, c);
	}
	cout << Kruskal(n, edges) << endl;
}
