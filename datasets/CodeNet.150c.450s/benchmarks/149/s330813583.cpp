#include <iostream>
#include <vector>

using namespace std;

class DisjointSet {
public:
	vector<int> rank, p;

	DisjointSet() {}
	DisjointSet(int size) {
		rank.resize(size, 0);
		p.resize(size);
		for (int i = 0; i < size; i++) {
			p[i] = i;
		}
	}

	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}

	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}

	void link(int x, int y) {
		if (rank[x] > rank[y]) {
			p[y] = x;
			return;
		}
		if (rank[x] < rank[y]) {
			p[x] = y;
			return;
		}
		p[y] = x;
		rank[x]++;
	}

	int findSet(int x) {
		while (x != p[x]) {
			x = p[x];
		}
		return x;
	}
};

int main() {
	int n, q;
	int com;
	int x, y;

	cin >> n >> q;
	DisjointSet ds = DisjointSet(n);

	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com == 0) {
			ds.unite(x, y);
			continue;
		}
		if (com == 1) {
			cout << (ds.same(x, y) ? 1 : 0) << endl;
			continue;
		}
	}

	return 0;
}