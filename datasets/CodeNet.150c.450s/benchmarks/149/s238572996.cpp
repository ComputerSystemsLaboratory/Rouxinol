#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
public:
	vector<int> rank, p;
	DisjointSet(int size) {
		rank.resize(size, 0);
		p.resize(size, 0);
		for (int i = 0; i < size; i++) {
			makeSet(i);
		}
	}
	void makeSet(int x) {
		p[x] = x;
		rank[x] = 0;
	}
	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}
	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}
	void link(int x, int y) {
		if (rank[x] < rank[y]) {
			p[x] = y;
		}
		else {
			p[y] = x;
			if (rank[x] == rank[y]) rank[x]++;
		}
	}
	int findSet(int x) {
		if (x != p[x]) {
			p[x] = findSet(p[x]);
		}
		return p[x];
		
	}
};

int main() {
	int n,q;
	bool com;
	int x, y;
	cin >> n >> q;
	DisjointSet djs = DisjointSet(n);
	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com) {
			cout << djs.same(x, y) << endl;
		}
		else {
			djs.unite(x, y);
		}
	}
	return 0;
}