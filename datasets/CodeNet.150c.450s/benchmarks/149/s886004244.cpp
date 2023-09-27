#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii; typedef vector<int> vi;
typedef long long ll; typedef vector<long long> vll;
const int MOD = 1'000'000'007, MOD2 = 1'000'000'009;
const int INF = 0x3f3f3f3f; const ll BINF = 0x3f3f3f3f3f3f3f3fLL;

struct DSU {
	int n;
	vector<int> p;
	DSU(int sz) : n(sz), p(sz) {
		iota(p.begin(), p.end(), 0);
	}
	int fi(int x) {return p[x] = p[x] - x ? fi(p[x]) : x;}
	inline void un(int u, int v) {p[fi(u)] = p[fi(v)];}
};

int solve() {
	int n, m; cin >> n >> m;
	DSU dsu(n);
	for (int i=0;i<m;i++) {
		int op, x, y; cin >> op >> x >> y;
		int gx = dsu.fi(x), gy = dsu.fi(y);
		if (op == 0) {
			if (gx != gy) dsu.un(gx, gy);
		} else {
			cout << (gx == gy) << endl;
		}
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	// precompute();
	// int t; cin >> t; for (int i=1;i<=t;i++)
	solve();
	// cout << (solve() ? "YES" : "NO") << endl;
	return 0;
}

