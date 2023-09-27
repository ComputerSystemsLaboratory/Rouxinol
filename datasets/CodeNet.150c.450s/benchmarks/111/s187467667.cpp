#include<iostream>

using namespace std;

int a[100], n;
long long int dp[100][21];

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	dp[0][a[0]] = 1;

	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < 21; j++)
		{
			if (0 <= j + a[i] && j + a[i] <= 20)
			{
				dp[i][j + a[i]] += dp[i - 1][j];
			}
			if (0 <= j - a[i] && j - a[i] <= 20)
			{
				dp[i][j - a[i]] += dp[i - 1][j];
			}
		}
	}

	cout << dp[n - 2][a[n - 1]] << endl;
	return 0;
}