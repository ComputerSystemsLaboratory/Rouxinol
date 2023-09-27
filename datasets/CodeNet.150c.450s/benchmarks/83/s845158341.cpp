#include <stdio.h>
int INF = 1 << 20;

int dp[101][10001];
int N, W;
int value[100];
int weight[100];
int max(int x, int y) { if (x < y) return y; else return x; }

int main() {
	scanf("%d %d\n", &N, &W);
	for (int i = 0; i < N; i ++) {
		scanf("%d %d\n", &value[i], &weight[i]);
	}
	for (int i = 0; i <= 10000; i ++) {
		dp[0][i] = 0;
	}
	for (int i = 1; i <= N; i ++) {
		int v = value[i - 1];
		int w = weight[i - 1];
		for (int j = 0; j <= 10000; j ++) {
			if (j - w >= 0) {
				dp[i][j] = max(dp[i - 1][j - w] + v, dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	printf("%d\n", dp[N][W]);
	return 0;
}