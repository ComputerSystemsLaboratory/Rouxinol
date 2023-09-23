#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) c.begin(),c.end()
static const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
static const int MOD = (int)(1e9 + 7);

signed main() {
	for (int n, x; cin >> n >> x&&n;) {
		int cnt = 0;
		rep(i, 1, n)rep(j, i + 1, n) {
			int k = x - (i + j);
			if (k > j&&k <= n)cnt++;
		}
		cout << cnt << endl;

	}
	return 0;
}