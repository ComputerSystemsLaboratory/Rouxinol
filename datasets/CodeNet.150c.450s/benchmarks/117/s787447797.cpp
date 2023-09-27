#include <cstdio>
#include <algorithm>

#pragma warning(disable: 4996)

#define MAX_N 500000

using namespace std;

int N, C;

int v[MAX_N], dp[MAX_N + 7];

int main()
{
	scanf("%d", &N);

	dp[N] = 1;

	for (int i = (N + 2) / 2; i > 1; i--)
	{
		dp[i] = dp[2 * i - 1] + 2 * dp[2 * i] + dp[2 * i + 1];
	}

	for (int i = 2; i <= N; i++)
	{
		C += dp[i] * i;
	}

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &v[i]);
	}

	sort(v, v + N);

	for (int i = 0; i < N; i++)
	{
		if (i) { printf(" "); }

		printf("%d", v[i]);
	}

	printf("\n");

	printf("%d\n", C);

	return 0;
}