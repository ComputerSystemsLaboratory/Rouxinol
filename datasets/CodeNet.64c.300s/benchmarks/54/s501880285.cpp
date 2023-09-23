#include <algorithm>
#include <iostream>

#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, (n))

typedef unsigned long long ull;
using namespace std;

ull dp[21], dp2[21];
int a[110];
int main()
{
	ios_base::sync_with_stdio(0);
	int n;
	while (cin >> n) {
		rep(i, n) cin >> a[i];
		rep(i, 21) dp[i] = 0;
		dp[a[0]] = 1;
		REP(i, 1, n-1) {
			rep(j, 21) dp2[j] = 0;
			rep(j, 21) {
				if (j+a[i] < 21) dp2[j+a[i]] += dp[j];
				if (j-a[i] >= 0) dp2[j-a[i]] += dp[j];
			}
			rep(j, 21) dp[j] = dp2[j];
		}
		cout << dp[a[n-1]] << endl;
	}
	return 0;
}