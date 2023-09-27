#include <cstring>
#include <iostream>

using namespace std;

#define MAX_N 20
#define MAX_Q 200
#define MAX_M 2000

int n, q, A[MAX_N], m[MAX_Q];

bool dp[MAX_N + 1][MAX_M + 1];

int main()
{
	memset(dp, 0, sizeof(dp));

	cin >> n;

	for (int i = 0; i < n; i++) { cin >> A[i]; }

	cin >> q;

	for (int i = 0; i < q; i++) { cin >> m[i]; }

	dp[0][0] = true;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= MAX_M; j++)
		{
			if (j - A[i - 1] >= 0)
			{
				if (dp[i - 1][j] == true || dp[i - 1][j - A[i - 1]] == true)
				{
					dp[i][j] = true;
				}
			}
			else
			{
				if (dp[i - 1][j] == true)
				{
					dp[i][j] = true;
				}
			}
		}
	}

	for (int i = 0; i < q; i++)
	{
		cout << (dp[n][m[i]] ? "yes" : "no") << endl;
	}

	return 0;
}

// Time : O ( n * MAX_M )