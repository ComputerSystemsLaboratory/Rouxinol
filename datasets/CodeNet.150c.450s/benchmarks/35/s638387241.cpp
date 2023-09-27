#include <iostream>
#include <vector>

using namespace std;
int dp[5001];

void solve()
{
	int n;
	while(cin >> n, n)
	{
		for(int i = 0; i < 5001; ++i)
		{
			dp[i] = -999999999;
		}
		vector<int> Vec(n);
		for(int i = 0; i < n; ++i)
		{
			cin >> Vec[i];
		}
		int Max = -999999999;
		dp[0] = Vec[0];
		int sum = Vec[0];
		for(int i = 1; i < n; ++i)
		{
			if(sum + Vec[i] < Vec[i])
			{
				dp[i] = Vec[i];
				sum = Vec[i];
			}
			else
			{
				dp[i] = sum + Vec[i];
				sum += Vec[i];
			}
			if(dp[i] < dp[i - 1])
			{
				dp[i] = dp[i - 1];
			}
		}
		cout << dp[n - 1] << endl;
	}
}

int main()
{
	solve();
	return(0);
}