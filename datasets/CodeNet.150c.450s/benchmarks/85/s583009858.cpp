#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	int dp[100][100];
	int P[101];

	int n;
	cin >> n;
	cin >> P[0] >> P[1];
	for (int i = 1; i < n; i++)
	{
		int t;
		cin >> t >> P[i + 1];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; (j + i) < n; j++)
		{
			if (i == 0)
			{
				dp[j][j + i] = 0;
			}
			else if (i == 1)
			{
				dp[j][j + i] = P[j] * P[j + 1] * P[j + 2];
			}
			else
			{
				int mini = 10000000;
				for (int k = 0; k < i; k++)
				{
					mini = min(mini, dp[j][j + k] + dp[j + k + 1][j + i] + P[j] * P[j + k + 1] * P[j + i + 1]);
				}
				dp[j][j + i] = mini;
			}
		}
	}

	cout << dp[0][n - 1] << endl;

	return 0;
}
