#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define inf 0x3f7f7f7f

using namespace std;

int dp[11][11];

int main()
{
	int t, i, j, k, x, y, z, n, MIN, sum[11];
	while (scanf("%d", &t) && t)
	{
		for (i = n = 0; i < 11; i++)
			for (j = 0; j < 11; j++)
				dp[i][j] = inf;
		while (t--)
		{
			scanf("%d%d%d", &x, &y, &z);
			dp[x][y] = dp[y][x] = z;
			n = max(n, max(x + 1, y + 1));
		}
		for (k = 0; k < n; k++)
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					dp[i][j] = min(dp[i][k] + dp[k][j], dp[i][j]);
		for (i = 0, MIN = 0; i < n; i++)
		{
			for (j = sum[i] = 0; j < n; j++)
				if (i != j)
					sum[i] += dp[i][j];
			if (sum[MIN] > sum[i])
				MIN = i;
		}
		printf("%d %d\n", MIN, sum[MIN]);
	}	
	return 0;
}