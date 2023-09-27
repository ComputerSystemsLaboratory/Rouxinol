#include <cstdio>
#include <vector>
#include <algorithm>

#pragma warning(disable: 4996)

using namespace std;

int N, C;

vector<int> v;
vector<int> dp;

int main()
{
	scanf("%d", &N);

	v = vector<int>(N);
	dp = vector<int>(N + 7, 0);

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

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		if (i) { printf(" "); }

		printf("%d", v[i]);
	}

	printf("\n");

	printf("%d\n", C);

	return 0;
}