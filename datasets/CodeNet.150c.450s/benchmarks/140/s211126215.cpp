#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>

using namespace std;
using ll = long long;

struct UnionFind {
	vector<int> par;

	UnionFind(int N) : par(N) {
		for (int i = 0; i < N; i++) par[i] = i;
	}

	int root(int x) {
		if (par[x] == x) return x;
		return par[x] = root(par[x]);
	}

	void unite(int x, int y) {
		int rx = root(x);
		int ry = root(y);
		if (rx == ry) return;
		par[rx] = ry;
	}

	bool same(int x, int y) {
		int rx = root(x);
		int ry = root(y);
		return rx == ry;
	}
};

int main() {
	int v, e;
	cin >> v >> e;
	vector<tuple<int, int, int>> edges(e);
	for (int i = 0; i < e; i++) {
		int s, t, w;
		cin >> s >> t >> w;
		edges[i] = make_tuple(w, s, t);
	}
	sort(edges.begin(), edges.end());
	UnionFind tree(v);
	int res = 0;
	for (int i = 0; i < e; i++) {
		int w = get<0>(edges[i]);
		int s = get<1>(edges[i]);
		int t = get<2>(edges[i]);
		if (!tree.same(s, t)) {
			tree.unite(s, t);
			res += w;
		}
	}
	cout << res << endl;
	return 0;
}
