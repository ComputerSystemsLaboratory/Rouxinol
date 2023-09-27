#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);

signed main() {
	int n, m; cin >> n >> m;
	vector<int>coin; coin.push_back(0);
	rep(i, 0, m) {
		int d; cin >> d; coin.push_back(d);
	}
	vector<int>dp(n + 1, INF);
	dp[0] = 0;
	rep(i, 1, m + 1) {
		rep(j, coin[i], n + 1) {
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}