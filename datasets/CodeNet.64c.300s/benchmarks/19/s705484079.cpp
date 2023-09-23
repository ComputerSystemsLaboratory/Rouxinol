#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

const int INF = 1000000000;
const int MOD = 1000000007;
const double EPS = 1e-8;

int main() {
	int n;
	while (cin >> n, n) {
		int a[n], ans = -10000000;
		rep (i, n) cin >> a[i];
		int dp[n];
		dp[0] = a[0];
		REP (i, 1, n) {
			// dp[i] = dp[i - 1] + a[i];
			dp[i] = max(dp[i - 1] + a[i], a[i]);
		}
		rep(i, n) {
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
}