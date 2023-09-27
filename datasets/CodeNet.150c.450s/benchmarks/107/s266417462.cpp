#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double eps = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, -1, 0, 1};

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size(), m = s2.size();
	vector<vi> dp(n + 1, vi(m + 1, inf));
	dp[0][0] = 0;
	rep(i, n + 1) rep(j, m + 1) {
		int x = dp[i][j];
		if (i + 1 <= n) dp[i + 1][j] = min(dp[i + 1][j], x + 1);
		if (j + 1 <= m) dp[i][j + 1] = min(dp[i][j + 1], x + 1);
		if (i + 1 <= n && j + 1 <= m) dp[i + 1][j + 1] = min(dp[i + 1][j + 1], x + (s1[i] != s2[j]));
	}
	int ans = dp[n][m];
	cout << ans << endl;
	return 0;
}