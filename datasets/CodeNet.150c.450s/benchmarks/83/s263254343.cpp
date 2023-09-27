#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_N 101
#define MAX_W 100001
long long dp[MAX_N][MAX_W];

int main()
{
	long long N;
	cin >> N;
	long long W;
	cin >> W;
	vector<vector<long long>>v(N, vector<long long>(2));
	for (long long i = 0; i < N; i++)
	{
		cin >> v[i][0] >> v[i][1];

	}
	for (long long i = 0; i <= W; i++)
	{
		dp[0][i] = 0;
	}
	for (long long i = 0; i < N; i++)
	{
		for (long long j = 0; j <= W; j++)
		{
			if (j < v[i][1])
			{
				dp[i + 1][j] = dp[i][j];
			}
			else
			{
				dp[i + 1][j] = max(dp[i][j], dp[i][j - v[i][1]] + v[i][0]);
			}
		}
	}
	cout << dp[N][W] << endl;
	return 0;






}
