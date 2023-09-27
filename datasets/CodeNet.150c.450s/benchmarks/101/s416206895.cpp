#include <bits/stdc++.h>
 
using namespace std;

struct UnionFind {
	int sz;
	vector<int> par;
	UnionFind(int a) : sz(a), par(sz, -1) {}
	int root(int x) { return par[x] < 0 ? x : par[x] = root(par[x]);}
	bool same(int x, int y) { return root(x) == root(y);}
	bool unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;
		if (size(x) < size(y)) swap(x, y);
		par[x] += par[y];
		par[y] = x;
		return true;
	}
	int size(int x) { return -par[root(x)];}
	int size() { return sz;}
};

int main() {
    int n, m, q; cin >> n >> m;
    UnionFind U(n+1);
    while (m--) {
        int a, b; cin >> a >> b;
        U.unite(a, b);
    }
    cin >> q;
    while (q--) {
        int a, b; cin >> a >> b;
        if (U.same(a, b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
