#include <cstdio>
#include <algorithm>

const int MAX_N = 50000;

int n, m, c[20], dp[MAX_N + 1];

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &c[i]);
	}

	std::fill(dp, dp + MAX_N + 1, 20);

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		int min = dp[i - 1] + 1;
		for (int j = 0; j < m; ++j)
		{
			if (i - c[j] < 0)
			{
				continue;
			}
			min = std::min(min, dp[i - c[j]] + 1);
		}
		dp[i] = min;
	}

	printf("%d\n", dp[n]);
}
