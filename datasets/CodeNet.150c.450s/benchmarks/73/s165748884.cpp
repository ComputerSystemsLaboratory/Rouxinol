#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<(o)<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

class RangeSumQuery {
public:
	int n;
	vector<int> d;
	RangeSumQuery(int m) {
		for (n = 1; n < m; n *= 2);
		d.assign(n * 2, 0);
	}
	void add(int i, int x) {
		d[n + i] += x;
		for (int j = (n + i) / 2; j > 0; j >>= 1)
			d[j] = d[j * 2] + d[j * 2 + 1];
	}
	//[l, r)
	int query(int l, int r) {
		int sum = 0;
		for (; l && l + (l&-l) <= r; l += l&-l)
			sum += d[(n + l) / (l&-l)];
		for (; l < r; r -= r&-r)
			sum += d[(n + r) / (r&-r) - 1];
		return sum;
	}
	int get(int i) { return d[n + i]; }
};

signed main() {
	int n, q; cin >> n >> q;
	RangeSumQuery RSQ(n);
	rep(i, 0, q) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0)RSQ.add(x, y);
		else cout << RSQ.query(x, y + 1) << endl;
	}
	return 0;
}