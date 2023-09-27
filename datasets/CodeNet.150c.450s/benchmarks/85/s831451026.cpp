#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; --i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = b - 1; i >= a; --i)
#define SORT(v) sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define REV(v) reverse(v.begin(), v.end())
#define ITER(itr, v) for (auto itr = v.begin(); itr != v.end(); ++itr)
#define LB(v, x) (lower_bound(v.begin(), v.end(), x) - v.begin())
#define UB(v, x) (upper_bound(v.begin(), v.end(), x) - v.begin())
#define SZ(v) (int)v.size()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> c(n + 1);
	REP(i, n) {
		int r;
		cin >> r >> c[i + 1];
		if (i == 0) {
			c[0] = r;
		}
	}
	static int dp[101][101];
	FOR(i, 2, n + 1) {
		REP(j, n - i + 1) {
			int res = INT_MAX;
			FOR(k, 1, i) {
				int l = i - k;
				res = min(res, dp[k][j] + dp[l][j + k] + c[j] * c[j + k] * c[j + i]);
			}
			dp[i][j] = res;
		}
	}
	cout << dp[n][0] << endl;

	return 0;
}
