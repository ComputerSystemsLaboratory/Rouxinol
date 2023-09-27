#include <cstdio>
using namespace std;


int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int N, W, v[100], w[100];
	int dp[100][10001];

	scanf("%d%d", &N, &W);
	for (int i = 0;i < N;i++) {
		scanf("%d%d", v + i, w + i);
	}

	for (int j = 0;j <= W;j++) {
		dp[0][j] = (j >= w[0]) ? v[0] : 0;
	}
	for (int i = 1;i < N;i++) {
		for (int j = 0;j <= W;j++) {
			if (j < w[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
			}
		}
	}

	printf("%d\n", dp[N - 1][W]);

	return 0;
}