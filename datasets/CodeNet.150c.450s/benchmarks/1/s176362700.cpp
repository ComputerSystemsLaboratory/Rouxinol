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
	vector<int> a(n);
	REP(i, n) {
		cin >> a[i];
	}
	vector<int> dp(n + 1, INT_MAX);
	dp[0] = -1;
	REP(i, n) {
		auto itr = lower_bound(dp.begin(), dp.end(), a[i]);
		*itr = a[i];
	}
	int res = lower_bound(dp.begin(), dp.end(), INT_MAX) - dp.begin() - 1;
	cout << res << endl;

	return 0;
}
