#include "bits/stdc++.h"
using namespace std;

//#define int int64_t
#define REP(i, s, n) for (signed i = (s); i < signed(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(c) begin(c), end(c)


#define maxup(ans, x) (ans = (ans < x ? x : ans))
#define minup(ans, x) (ans = (ans > x ? x : ans))

using VV = vector<vector<int>>;
using V = vector<int>;
using P = pair<int, int>;
using IP = pair<int, P>;

signed main() {
	const int NM = 1e6;
	vector<int> seisi, dp(NM, 1 << 29), dp2(NM, 1 << 29);
	for (int i = 1; i * (i + 1) * (i + 2) / 6 < NM; i++) {
		int x = i * (i + 1) * (i + 2) / 6;
		seisi.push_back(x);
	}
	dp2[0] = dp[0] = 0;
	rep(i, NM) {
		for (auto x : seisi) {
			if (i - x < 0) break;
			dp[i] = min(dp[i], dp[i - x] + 1);
			if (x % 2) dp2[i] = min(dp2[i], dp2[i - x] + 1);
		}
	}

	int n;
	while (cin >> n && n) {
		cout << dp[n] << " " << dp2[n] << endl;
	}
}