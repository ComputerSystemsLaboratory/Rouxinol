#include <bits/stdc++.h>

using namespace std;

struct UnionFind {  // The range of node number is u 0 v n-1
	vector<int> rank, parents;
	UnionFind() {}
	UnionFind(int n) {  // make n trees.
		rank.resize(n, 0);
		parents.resize(n, 0);
		for (int i = 0; i < n; i++) {
			makeTree(i);
		}
	}
	void makeTree(int x) {
		parents[x] = x;  // the parent of x is x
		rank[x] = 0;
	}
	bool isSame(int x, int y) { return findRoot(x) == findRoot(y); }
	void unite(int x, int y) {
		x = findRoot(x);
		y = findRoot(y);
		if (rank[x] > rank[y]) {
			parents[y] = x;
		}
		else {
			parents[x] = y;
			if (rank[x] == rank[y]) {
				rank[y]++;
			}
		}
	}
	int findRoot(int x) {
		if (x != parents[x]) parents[x] = findRoot(parents[x]);
		return parents[x];
	}
};

// 辺の定義
struct Edge {
	int u;
	int v;
	int cost;
};

bool comp_e(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; } // 辺を直接比較するための関数

long long Kruskal(vector<Edge> &edges, int v) {

	long long sum=0;  // 最小全域木の重みの総和

	sort(edges.begin(), edges.end(), comp_e); // 辺の重みでソート

	UnionFind uft = UnionFind(v);

	for (int i = 0; i < edges.size();i++) {
		if (!uft.isSame(edges[i].u, edges[i].v)) { // 閉路にならなければ加える
			uft.unite(edges[i].u, edges[i].v);
			sum += edges[i].cost;
		}
	}

	return sum;
};

int main() {

	int v, e;
	cin >> v >> e;

	vector<Edge> edges(e);
	
	for (int i = 0; i < e; i++) {
		int s, t, w;
		cin >> s >> t >> w;

		edges[i] = { s, t, w };

	}

	long long krs=Kruskal(edges, v);
	cout << krs << endl;
	return 0;
}
