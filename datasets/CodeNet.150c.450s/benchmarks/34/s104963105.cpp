#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

int main() {
	int n;
	while (cin >> n, n) {
		vector<ll> dp(n + 1, 0);
		dp[0] = 1;
		REP(i, n) {
			FOR(j, 1, 3 + 1) {
				if (i + j > n) continue;
				dp[i + j] += dp[i];
			}
		}
		dp[n] = dp[n] % 10 == 0 ? dp[n] / 10 : dp[n] / 10 + 1;
		cout << (dp[n] % 365 == 0 ? dp[n] / 365 : dp[n] / 365 + 1) << endl;
	}
	return 0;
}