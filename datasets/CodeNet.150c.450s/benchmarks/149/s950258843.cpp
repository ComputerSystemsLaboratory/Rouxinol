#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

struct UnionFind {
	vector<int> data;

	UnionFind(int size) : data(size, -1) { }

	bool union_set(int x, int y) {
		x = root(x);
		y = root(y);

		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y];
			data[y] = x;
		}
		return x != y;
	}

	bool find_set(int x, int y) {
		return root(x) == root(y);
	}

	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}

	int size(int x) {
		return -data[root(x)];
	}
};

int main() {
	int n, q;
	cin >> n >> q;

	UnionFind uf(n);

	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;

		if (c == 0) {
			uf.union_set(x, y);
		} else {
			cout << uf.find_set(x, y) << endl;
		}
	}
}