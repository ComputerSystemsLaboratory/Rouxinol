#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n, m, c[20];
	int dp[50001];

	scanf("%d%d", &n, &m);
	for (int i = 0;i < m;i++) {
		scanf("%d", &c[i]);
	}
	for (int i = 0;i <= n;i++) {
		dp[i] = 1000000;
	}

	dp[0] = 0;
	for (int i = 1;i <= n;i++) {
		for (int j = 0;j < m;j++) {
			if (c[j] <= i) {
				dp[i] = min(dp[i], dp[i - c[j]] + 1);
			}
		}
	}

	printf("%d\n", dp[n]);

	return 0;
}