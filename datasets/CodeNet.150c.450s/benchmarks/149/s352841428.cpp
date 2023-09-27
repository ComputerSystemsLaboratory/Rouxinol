#include <cstdio>
#include <iostream>
#include <type_traits>
#include <vector>

using namespace std;

class DisjointSet {
private:
	vector<int> p, height;
public:
	DisjointSet(int size) {
		p.resize(size, 0);
		height.resize(size, 0);
		for (int i = 0; i < size; ++i)
			p[i] = i;
	}

	int find(int v) {
		if (p[v] != v)
			p[v] = find(p[v]);
		return p[v];
	}

	void link(int a, int b) {
		if (height[a] > height[b]) {
			p[b] = a;
		} else {
			if (height[a] == height[b]) {
				++height[b];
			}
			p[a] = b;
		}
	}

	void unite(int a, int b) {
		link(find(a), find(b));
	}

	bool same(int a, int b) {
		return find(a) == find(b);
	}
};

int main() {

	int n, q;
	scanf("%d %d", &n, &q);

	DisjointSet d(n);

	for (int i = 0; i < q; ++i) {
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if (com == 0) {
			d.unite(x, y);
		} else {
			if (d.same(x, y)) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}