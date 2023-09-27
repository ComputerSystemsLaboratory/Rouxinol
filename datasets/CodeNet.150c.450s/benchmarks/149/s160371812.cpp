#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Disjointset {

private:
	vector<int> p, rank;

	void makeset(int x) {
		p[x] = x;
		rank[x] = 0;
	}

	void link(int x, int y) {
		if (rank[x] > rank[y]) {
			p[y] = x;
		} else {
			p[x] = y;
			if (rank[x] == rank[y]) {
				rank[y]++;
			}
		}
	}

public:
	Disjointset(int size) {
		p.resize(size, 0);
		rank.resize(size, 0);
		for (int i = 0; i < size; ++i)
			makeset(i);
	}

	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}

	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}

	int findSet(int x) {
		if (x != p[x]) {
			p[x] = findSet(p[x]);
		}
		return p[x];
	}
};

int main() {

	int n, q;
	scanf("%d %d", &n, &q);

	Disjointset disjointset(n);

	for (int i = 0; i < q; ++i) {
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if (com == 0) {
			disjointset.unite(x, y);
		} else {
			if (disjointset.same(x, y)) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}