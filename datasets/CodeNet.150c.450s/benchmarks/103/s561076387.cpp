#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	const int MAX_NO  = 9;
	const int MAX_NOS = 9;
	const int MAX_SUM = 100;

	int n[50], s[50], c = 0, dp[MAX_NOS + 1][MAX_NO + 1][MAX_SUM + 1];

	long long SUM = 0;

	memset(dp, 0, sizeof(dp));

	for (int i = 0; i < MAX_NO; i++)
	{
		dp[1][i][i] = 1;
	}

	for (int N = 2; N <= MAX_NOS; N++)
	{
		for (int i = 1; i <= MAX_NO; i++)
		{
			for (int j = 1; j <= MAX_SUM; j++)
			{
				if (j - i >= 0)
				{
					for (int k = 0; k < i; k++)
					{
						dp[N][i][j] += dp[N - 1][k][j - i];
					}
				}
			}
		}
	}

	while (true)
	{
		cin >> n[c] >> s[c];

		if (n[c] == 0 && s[c] == 0) { goto Exit; }

		c++;
	}

Exit:;

	for (int p = 0; p < c; p++)
	{
		SUM = 0;

		for (int i = 0; i <= MAX_NO; i++)
		{
			SUM += dp[n[p]][i][s[p]];
		}

		cout << SUM << endl;
	}

	return 0;
}