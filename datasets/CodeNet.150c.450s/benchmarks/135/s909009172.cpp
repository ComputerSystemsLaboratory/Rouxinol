#include <cstdio>

#pragma warning(disable: 4996)

#define MAX_N 1500
#define MAX_D 1000

#define MAX_R MAX_N * MAX_D

int N, M, H[MAX_N], W[MAX_N];

int dp[2][MAX_R + 1];

int main()
{
	while (true)
	{
		scanf("%d", &N);
		scanf("%d", &M);

		if (N == 0 && M == 0) { break; }

		for (int i = 0; i < N; i++) { scanf("%d", &H[i]); }
		for (int i = 0; i < M; i++) { scanf("%d", &W[i]); }

		for (int i = 0; i <= N; i++)
		{
			int dist = 0;

			for (int j = i; j < N; j++)
			{
				dist += H[j];

				dp[0][dist] += 1;
			}
		}

		for (int i = 0; i <= M; i++)
		{
			int dist = 0;

			for (int j = i; j < M; j++)
			{
				dist += W[j];

				dp[1][dist] += 1;
			}
		}

		int count = 0;

		for (int i = 0; i <= MAX_R; i++)
		{
			count += dp[0][i] * dp[1][i];

			dp[0][i] = 0;
			dp[1][i] = 0;
		}

		printf("%d\n", count);
	}

	return 0;
}