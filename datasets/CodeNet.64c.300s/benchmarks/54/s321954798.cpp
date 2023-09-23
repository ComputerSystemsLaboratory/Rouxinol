#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a;
	vector<int> x;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int w;
		cin >> w;
		x.push_back(w);
	}
	int s = 0;
	long long int dp[101][101];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			dp[i][j] = 0;
		}
	}
	dp[1][x[0]] = 1;
	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j <= 20 ; j++)
		{
			if (j - x[i] >= 0)
			{
				dp[i + 1][j - x[i]] += dp[i][j];
			}
			dp[i + 1][j + x[i]] += dp[i][j];
		}
	}
	cout << dp[a - 1][x[a - 1]] << endl;
	return 0;

}