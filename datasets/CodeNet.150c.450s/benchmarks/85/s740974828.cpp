#include <stdio.h>

int N;
int R[200];
int dp[200][200];

int min(int x, int y) { return x < y ? x : y; }

int main(void) {
	scanf("%d", &N);
	for (int i = 0; i < N; i ++) {
		scanf("%d %d", &R[i], &R[i+1]);
	}
	for (int i = 0; i < N; i ++) {
		for (int j = 0; j < N; j ++) {
			dp[i][j] = 1 << 20;
		}
	}
	for (int i = 0; i < N; i ++) {
		dp[i][0] = 0;
	}
	for (int j = 0; j < N; j ++) {
		for (int i = 0; i + j < N; i ++) {
			// M_j ... M_{j+i}のi+1個の積について考える
			for (int k = 0; k < j; k ++) {
				// (M_j ... M_{j+k}) (M_{j+k+1} ... M_{j+i})
				//   (k+1個の積)            (i-k個の積)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[i+k+1][j-k-1] + R[i] * R[i+k+1] * R[i+j+1]);
			}
		}
	}
	printf("%d\n", dp[0][N-1]);
	return 0;
}