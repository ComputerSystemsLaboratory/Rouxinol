#include <bits/stdc++.h>
using namespace std;

class UnionFind {
private:
	vector<int> v;
public:
	UnionFind(int n) {
		for (int i = 0; i < n; i++) v.emplace_back(-1);
	}
	int root(int x) {
		return v[x] < 0 ? x : v[x] = root(v[x]);
	}
	void unite(int x,int y) {
		if (root(x) == root(y)) {
			return;
		}
		v[root(x)] = root(y);
	}
	bool same(int x, int y) {
		return root(x) == root(y);
	}
};

int main() {
	int n, q;
	cin >> n >> q;
	UnionFind uf(n);
	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com) {
			cout << uf.same(x, y) << endl;
		}
		else {
			uf.unite(x, y);
		}
	}
	return 0;
}