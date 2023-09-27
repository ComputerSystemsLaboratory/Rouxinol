#include <stdio.h>
#include <algorithm>
#define INF	123456789

int n, m, c[21];
int dp[51234];

int main(void) {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; ++i) { scanf("%d", &c[i]); }

	for (int i = 1; i <= n; ++i) { dp[i] = INF; }
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j <= n; ++j) {
			if (j - c[i] >= 0) {
				dp[j] = std::min(dp[j], dp[j - c[i]] + 1);
			}
		}
	}

	printf("%d\n", dp[n]);
	return 0;
}