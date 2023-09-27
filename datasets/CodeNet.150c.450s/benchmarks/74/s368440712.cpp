#include <stdio.h>
int INF = 1 << 20;

int min(int x, int y) { if (x < y) return x; else return y; }

int dp[21][50001];
int main() {
	int n, m;
	int deno[20];
	scanf("%d %d\n", &n, &m);
	for (int i = 0; i < m; i ++) {
		scanf("%d", &deno[i]);
	}
	dp[0][0] = 0;
	for (int k = 1; k <= n; k ++) {
		dp[0][k] = INF;
	}
	for (int i = 1; i <= m; i ++) {
		int d = deno[i - 1];
		for (int k = 0; k <= n; k ++) {
			if (k - d >= 0) {
				dp[i][k] = min(dp[i - 1][k], dp[i][k - d] + 1);
			} else {
				dp[i][k] = dp[i - 1][k];
			}
		}
	}
	printf("%d\n", dp[m][n]);
	return 0;
}