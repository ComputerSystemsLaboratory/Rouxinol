#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

struct UnionFind {
	vector<int> data;
	UnionFind(int size) : data(size, -1) { }
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};


struct Edge {
	int a, b, cost;

	Edge(int a, int b, int cost) : a(a), b(b), cost(cost) {}

	bool operator<(const Edge& o)const {
		return cost < o.cost;
	}
};

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, Ans = 0; cin >> n;
	vector<Edge> es;
	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= n; j++) {
			int temp; cin >> temp;
			if (j < i)continue;
			if (temp != -1) {
				Edge e(i, j, temp);
				es.push_back(e);
			}
		}
	}
	sort(es.begin(), es.end());

	/*kruskal*/

	UnionFind uf(n+1);
	for (int i = 0; i < es.size();i++) {
		//cout << es[i].a << " " << es[i].b << " " << es[i].cost << endl;
		Edge& e = es[i];
		if (!uf.findSet(e.a, e.b)) {
			Ans += e.cost;
			uf.unionSet(e.a, e.b);
		}
	}

	cout << Ans << endl;

}