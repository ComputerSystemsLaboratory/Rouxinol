#include <stdio.h>
#include <string.h>
#include <algorithm>
#define INF	123456789

int N, W, v[112], w[112];
int memo[112][11234];

int dp(int i, int j) {
	if (j < 0) { return -INF; }
	if (i == 0) { return 0; }
	if (memo[i][j] != -1) { return memo[i][j]; }
	return memo[i][j] = std::max(dp(i - 1, j), dp(i - 1, j - w[i - 1]) + v[i - 1]);
}

int main(void) {
	scanf("%d%d", &N, &W);
	for (int i = 0; i < N; ++i) { scanf("%d%d", &v[i], &w[i]); }

	memset(memo, -1, sizeof(memo));

	printf("%d\n", dp(N, W));
	return 0;
}