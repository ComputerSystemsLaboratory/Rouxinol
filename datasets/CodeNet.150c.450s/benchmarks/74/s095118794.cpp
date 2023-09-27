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

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, M; cin >> N >> M;
	vector<int> coins(M+1); rep(i, 1, M+1) { cin >> coins[i]; }
	vector<vector<int>>dp(M + 1, vector<int>(N + 1, INF));
	rep(i, 1, M + 1)rep(j, 0, N + 1) {
		if (j == 0)dp[i][j] = 0;
		else {
			dp[i][j] = dp[i - 1][j];
			if (j - coins[i] >= 0)chmin(dp[i][j], dp[i][j - coins[i]]+1);
		}
	}
	cout << dp[M][N] << endl;
	return 0;
}