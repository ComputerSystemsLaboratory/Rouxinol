#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[1001][1001] = { 0 };
int main()
{
	int sy,sx, q, k;
	char x[2001], y[2001];
	k = 0;
	scanf("%d", &q);
	for (int z = 0; z < q; z++)
	{
		if (z != 0)
		{
			for (int i = 1; i <= sy; i++)
			{
				for (int j = 1; j <= sx; j++)
					dp[i][j] = 0;
			}
		}
		scanf("%s %s", x, y);
		sx = strlen(x);
		sy = strlen(y);
		for (int i = 1; i <= sy; i++)
		{
			for (int j = 1; j <= sx; j++)
			{
				if (y[i - 1] == x[j - 1])
					dp[i][j] += dp[i - 1][j - 1] + 1;
				else
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		printf("%d\n", dp[sy][sx]);
	}
	return 0;
}