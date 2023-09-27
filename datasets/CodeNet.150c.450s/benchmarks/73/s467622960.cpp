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

struct RangeSumQuery {
	// SegmentTree (1-indexed)
	int n;
	vector<int>d;
	RangeSumQuery(int m) {
		for (n = 1; n < m; n <<= 1);
		d.assign(2 * n, 0);
	}
	void add(int i, int x) {
		d[n + i] += x;
		for (int j = (n + i) / 2; j > 0; j >>= 1) {
			d[j] += x;
		}
	}
	int sum(int a, int b) {
		return sum(a, b, 1, 0, n);
	}
	int sum(int a, int b, int k, int l, int r) {
		// [a,b) [l,r)
		if (r <= a || b <= l)return 0;
		else if (a <= l&&r <= b)return d[k];
		else {
			int vl, vr;
			vl = sum(a, b, k * 2, l, (l + r) / 2);
			vr = sum(a, b, k * 2 + 1, (l + r) / 2, r);
			return (vl + vr);
		}
	}
};

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q; cin >> n >> q;
	RangeSumQuery rsq(n);
	rep(i, 0, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com)cout << rsq.sum(x - 1, y) << endl;
		else rsq.add(x - 1, y);
	}
	dump(rsq.d);
	return 0;
}