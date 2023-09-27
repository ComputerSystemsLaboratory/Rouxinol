#include <bits/stdc++.h>

using namespace std;

/* UnionFind：素集合系管理の構造体(union by rank)
	isSame(x, y): x と y が同じ集合にいるか。 計算量はならし O(α(n))
	unite(x, y): x と y を同じ集合にする。計算量はならし O(α(n))
*/
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
	long long u;
	long long v;
	long long cost;
};

bool comp_e(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; } // 辺を直接比較するための関数

/* Kruskal :クラスカル法で minimum spanning tree を求める構造体
	入力: 辺のvector, 頂点数V
	最小全域木の重みの総和: sum
	計算量: O(|E|log|V|)
*/

struct Kruskal {
	UnionFind uft;
	long long sum;  // 最小全域木の重みの総和
	vector<Edge> edges;
	int V;
	Kruskal(const vector<Edge> &edges_, int V_) : edges(edges_), V(V_) { init(); }
	void init() {
		sort(edges.begin(), edges.end(), comp_e); // 辺の重みでソート
		uft = UnionFind(V);
		sum = 0;
		for (auto e : edges) {
			if (!uft.isSame(e.u, e.v)) { // 閉路にならなければ加える
				uft.unite(e.u, e.v);
				sum += e.cost;
			}
		}
	}
};

int main() {

	int n;
	cin >> n;
	vector<vector<int>> VE(n, vector<int>(n));
	int counter=0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> VE[i][j];
			if (VE[i][j] != -1) { counter++; }
		}
	}

	int V, E;
	V = n;
	E = counter;
//	cin >> V >> E;
	vector<Edge> edges(E);
//	for (int i = 0; i < E; i++) {
	counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			long long s, t, w;
			//		cin >> s >> t >> w;
			if (VE[i][j] != -1) {
				s = i;
				t = j;
				w = VE[i][j];

				Edge e = { s, t, w };
				edges[counter] = e;
				counter++;
			}
		}
	}
//	}


	Kruskal krs(edges, V);
	cout << krs.sum << endl;
	return 0;
}
