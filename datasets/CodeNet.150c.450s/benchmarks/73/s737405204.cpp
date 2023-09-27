#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
struct RSQ {
	int n;
	vector<int>d;
	RSQ(int m) {
		for (n = 1; n < m; n <<= 1);
		d.assign(2 * n, 0);
	}
	void add(int i, int x) {
		for (int j = (n + i); j > 0; j >>= 1)d[j] += x;
	}
	int getsum(int a, int b, int k = 1, int l = 0, int r = -1) {
		if (r == -1)r = n;
		if (r <= a || b <= l)return 0;
		if (a <= l&&r <= b)return d[k];
		else return getsum(a, b, 2 * k, l, (l + r) / 2) + getsum(a, b, 2 * k + 1, (l + r) / 2, r);
	}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;
	RSQ rsq(n);
	rep(i, 0, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com)cout << rsq.getsum(x - 1, y) << endl;
		else rsq.add(x - 1, y);
	}
	return 0;
}