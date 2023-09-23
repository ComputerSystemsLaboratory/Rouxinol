#include <stdio.h>
#include <string.h>

int N, a[112];
long long int dp[112][21];

int main(void) {
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) { scanf("%d", &a[i]); }

	memset(dp[0], 0, sizeof(dp[0]));
	dp[0][a[0]] = 1;
	for (int i = 1; i < N - 1; ++i) {
		for (int j = 0; j <= 20; ++j) {
			if (0 <= j - a[i]) { dp[i][j] += dp[i - 1][j - a[i]]; }
			if (j + a[i] <= 20) { dp[i][j] += dp[i - 1][j + a[i]]; }
		}
	}

	printf("%lld\n", dp[N - 2][a[N - 1]]);
	return 0;
}