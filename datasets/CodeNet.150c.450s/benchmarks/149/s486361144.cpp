#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
struct DisjointSet {
	vector<int>p, rank;
	DisjointSet(int n) {
		p.resize(n);
		rank.assign(n, 0);
		rep(i, 0, n)p[i] = i;
	}
	int root(int x) {
		if (x != p[x])p[x] = root(p[x]);
		return p[x];
	}
	int same(int x, int y) {
		return root(x) == root(y);
	}
	void unite(int x, int y) {
		if (same(x, y))return;
		
		x = root(x), y = root(y);

		if (rank[x] < rank[y])p[x] = y;
		else {
			p[y] = x;
			if (rank[x] == rank[y])rank[x]++;
		}
	}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;
	DisjointSet uf(n);
	rep(i, 0, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com)cout << uf.same(x, y) << endl;
		else uf.unite(x, y);
	}
	return 0;
}