#include <stdio.h>
#include <algorithm>

const int N = 100;
int n, p[N + 1], dp[N + 1][N + 1];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &p[i - 1], &p[i]);

	for (int i = 1; i <= n; i++)
		dp[i][i] = 0;

	for (int k = 2; k <= n; k++)
	{
		for (int i = 1; i <= n - k + 1; i++)
		{
			int j = i + k - 1;
			dp[i][j] = 1 << 20;
			for (int s = i; s <= j - 1; s++)
				dp[i][j] = std::min(dp[i][j], dp[i][s] + dp[s + 1][j] + p[i - 1] * p[s] * p[j]);
		}
	}
	printf("%d\n", dp[1][n]);

	return 0;
}

