#include <bits/stdc++.h>

using namespace std;

int a[100];

long long  dp[100][21];

int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; ++i) cin >> a[i];

	dp[0][a[0]] = 1;

	for (int i = 1; i < n - 1; ++i) {
		for (int j = 0; j <= 20; ++j) {
			if (j + a[i] <= 20) dp[i][j] += dp[i - 1][j + a[i]];
			if (j - a[i] >= 0) dp[i][j] += dp[i - 1][j - a[i]];
		}
	}

	printf("%lld\n", dp[n - 2][a[n - 1]]);
}