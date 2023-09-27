#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define INF 1<<30
#define LINF 1LL<<60

struct UnionFind {
	vector<int> par;
	int n, cnt;
	UnionFind(const int& x = 0) { init(x); }
	void init(const int& x) { par.assign(cnt = n = x, -1); }
	inline int find(const int& x) { return par[x] < 0 ? x : par[x] = find(par[x]); }
	inline bool same(const int& x, const int& y) { return find(x) == find(y); }
	inline bool unite(int x, int y) {
		if ((x = find(x)) == (y = find(y))) return false;
		--cnt;
		if (par[x] > par[y]) swap(x, y);
		par[x] += par[y];
		par[y] = x;
		return true;
	}
	inline int count() const { return cnt; }
	inline int count(int x) { return -par[find(x)]; }
};

/* example : http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp */
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	ll n, q; cin >> n >> q;
	UnionFind uf(n);
	for (int i = 0; i < q;i++) {
		ll com, x, y; cin >> com >> x >> y;
		if (com == 0) {
			uf.unite(x, y);
		}
		else if (com == 1) {
			if (uf.same(x, y)) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}
	return 0;
}