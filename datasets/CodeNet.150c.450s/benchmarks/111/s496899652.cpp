#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

#define int long long
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
	int n; cin >> n;
	vector<int>v(n); rep(i, 0, n)cin >> v[i];
	vector<vector<int> >dp(n, vector<int>(21));
	dp[0][v[0]] = 1;
	rep(i, 0, n - 2) {
		rep(j, 0, 21) {
			if (dp[i][j] > 0) {
				int plus = j + v[i+1], minus = j - v[i+1];
				if (plus < 21)dp[i + 1][plus] += dp[i][j];
				if (0 <= minus)dp[i + 1][minus] += dp[i][j];
			}
		}
	}
	cout << dp[n - 2][v[n - 1]] << endl;
	return 0;
}