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
	int n, w; cin >> n >> w; vector<pair<int, int>>item; item.push_back(make_pair(0, 0));
	rep(i, 0, n) {
		int v, w; cin >> v >> w; item.push_back(make_pair(v, w));
	}
	vector<vector<int>>dp(n + 1, vector<int>(w + 1, 0));
	rep(i, 1, n + 1) {
		rep(j, 0, w + 1) {
			dp[i][j] = dp[i - 1][j];
			if (j - item[i].second >= 0) {
				dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - item[i].second] + item[i].first);
			}
		}
	}
	cout << dp[n][w] << endl;
	return 0;
}