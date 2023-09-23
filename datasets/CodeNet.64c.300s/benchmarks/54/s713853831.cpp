#include "stdio.h"
int N;
int num[100] = {};
long long int dp[99][21] = {};


int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	dp[0][num[0]] = 1;
	for (int i = 1; i < N - 1; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j - num[i] >= 0) dp[i][j] += dp[i - 1][j - num[i]];
			if (j + num[i] <= 20)dp[i][j] += dp[i - 1][j + num[i]];
		}
	}
	printf("%lld\n", dp[N - 2][num[N - 1]]);
	return 0;
}