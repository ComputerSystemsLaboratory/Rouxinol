#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 0
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

int f(int Y, int M, int D) {
	int ret = 0;
	ret += ((Y - 1) / 3) * 10 * 20;
	ret += ((Y - 1) - (Y - 1) / 3)*(5 * 19 + 5 * 20);
	dump(ret);
	ret += Y % 3 ? M / 2 * 20 + (M - 1) / 2 * 19 : (M - 1) * 20;
	ret += D;
	return ret;
}

signed main() {
	int n; cin >> n;
	rep(i, 0, n) {
		int Y, M, D; cin >> Y >> M >> D;
		int ans = f(1000, 1, 1) - f(Y, M, D);
		cout << ans << endl;
	}
	return 0;
}