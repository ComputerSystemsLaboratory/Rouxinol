#include <iostream>
#include <cstdio>

using namespace std;

typedef long long LL;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main(void) {
	int n, a[100] = {0};
	LL dp[100][21] = {0};
	cin >> n;
	REP(i, n) scanf("%d", &a[i]);
	
	dp[n-1][a[n-1]] = 1;
	for (int i = n - 2; i >= 1; --i) {
		for (int j = 0; j <= 20; ++j) {
			if (j + a[i] <= 20) dp[i][j] += dp[i + 1][j + a[i]];
			if (j - a[i] >= 0) dp[i][j] += dp[i + 1][j - a[i]];
		}
	}
	cout << dp[1][a[0]] << endl;
	return 0;
}