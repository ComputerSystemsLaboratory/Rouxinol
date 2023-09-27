#include <vector>
#include <iostream>

using namespace std;

#define MAX_M 20
#define MAX_N 50000

#define INF 100000000

int n, m;

vector<int> c(MAX_M, 0);
vector<int> dp(MAX_N + 1, INF);

int coin_c(int k)
{
	dp[0] = 0;

	for(int i = 1; i <= k; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(i - c[j] >= 0)
			{
				if(dp[i] > dp[i - c[j]] + 1)
				{
					dp[i] = dp[i - c[j]] + 1;
				}
			}
		}
	}

	return dp[n];
}

int main()
{
	cin >> n >> m;

	for(int i = 0; i < m; i++)
	{
		cin >> c[i];
	}

	cout << coin_c(n) << endl;

	return 0;
}