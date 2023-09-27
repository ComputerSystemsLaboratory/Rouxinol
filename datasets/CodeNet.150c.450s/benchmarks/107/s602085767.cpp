#include <bits/stdc++.h>

using namespace std;

#define FOR(i,s, t) for(int i = s; i < t; i++)
#define ALL(a)  a.begin(), a.end()
#define SZ(x) (int)x.size()
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))
#define SORT(a) sort(ALL(a))
using VI = vector<int>;
using LL = long long;
using VVL = vector<vector<LL>>;
using VL = vector<LL>;

const LL LINF = 1e18;

int editDistance(string& s, string& t) {
	VVL dp(1010, VL(1010, 0));

	FOR(i, 0, 1010) {
		dp[i][0] = i;
		dp[0][i] = i;
	}
	FOR(i, 0, SZ(s)) {
		FOR(j, 0, SZ(t)) {
			int cost = (s[i] == t[j]) ? 0 : 1;
			dp[i + 1][j + 1] = min(dp[i][j] + cost, min(dp[i + 1][j] + 1, dp[i][j + 1] + 1));
		}
	}
	return dp[s.size()][t.size()];
}

signed main() {
	string s, t;
	cin >> s >> t;
	cout << editDistance(s, t) << endl;
}



