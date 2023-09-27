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
struct BIT {
	int n;
	vector<int>d;
	BIT(int m) {
		n = m;
		d.assign(n + 1, 0);
	}
	void add(int i, int x) {
		for (int j = i; j <= n; j += j&-j) {
			dump(j);
			d[j] += x;
		}
	}
	int getsum(int i) {
		int ret(0);
		for (int j = i; j > 0; j -= j&-j)ret += d[j];
		return ret;
	}
	int getsum(int s, int t) {
		return getsum(t) - getsum(s - 1);
	}
};
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, Q; cin >> N >> Q;
	BIT tree(N);
	dump(1);
	rep(i, 0, Q) {
		int com, x, y; cin >> com >> x >> y;
		dump(tree.d);
		if (com)cout << tree.getsum(x, y) << endl;
		else tree.add(x, y);
	}
	return 0;
}