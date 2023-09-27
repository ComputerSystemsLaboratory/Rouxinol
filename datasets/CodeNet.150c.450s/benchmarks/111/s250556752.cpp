#include <iostream>
#include <vector>

using namespace std;
unsigned long long int dp[101][21];

void solve()
{
	int N;
	cin >> N;
	vector<int> nums(N);
	for(int i = 0; i < N; ++i)
	{
		cin >> nums[i];
	}
	int pos = 0;
	dp[1][nums[0]] = 1;
	for(int i = 1; i < N - 1; ++i)
	{
		for(int j = 0; j < 21; ++j)
		{
			if(0 <= j + nums[i] && j + nums[i] <= 20)
			{
				dp[i + 1][j + nums[i]] += dp[i][j];
			}
			if(0 <= j - nums[i] && j - nums[i] <= 20)
			{
				dp[i + 1][j - nums[i]] += dp[i][j];
			}
		}
	}
	cout << dp[N - 1][nums[N - 1]] << endl;
}

int main()
{
	solve();
	return(0);
}