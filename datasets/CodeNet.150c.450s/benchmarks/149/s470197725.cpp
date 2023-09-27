#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Disjointset {
private:
	vector<int> p, rank;
public:
	Disjointset(int size) {
		p.resize(size, 0);
		rank.resize(size, 0);
		for (int i = 0; i < size; ++i) {
			p[i] = i;
		}
	}

	int find(int v) {
		if (p[v] != v)
			p[v] = find(p[v]);
		return p[v];
	}

	bool isSame(int x, int y) {
		return find(x) == find(y);
	}

	void unite(int x, int y) {
		link(find(x), find(y));
	}

	void link(int x, int y) {
		if (rank[x] > rank[y]) {
			p[y] = x;
		} else {
			if (rank[x] == rank[y])
				++rank[y];
			p[x] = y;
		}
	}
};

int main() {

	int n, q;
	scanf("%d %d", &n, &q);
	Disjointset d(n);
	for (int i = 0; i < q; ++i) {
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if (com == 0) {
			d.unite(x, y);
		} else {
			if (d.isSame(x, y)) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}