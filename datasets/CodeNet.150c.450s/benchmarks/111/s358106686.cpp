#include <iostream>
#include <vector>
#include <string.h>

using namespace std;
unsigned long long int dp[102][22];

void solve()
{
	int n;
	cin >> n;
	vector<int> Vec(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> Vec[i];
	}
	memset(dp, 0, sizeof(dp));
	dp[1][Vec[0]] = 1;
	for(int i = 1; i < n - 1; ++i)
	{
		for(int j = 0; j < 21; ++j)
		{
			if(dp[i][j] > 0)
			{
				int plus = j + Vec[i];
				int minus = j - Vec[i];
				if(0 <= plus && plus < 21)
				{
					dp[i + 1][plus] += dp[i][j];
				}
				if(0 <= minus && minus < 21)
				{
					dp[i + 1][minus] += dp[i][j];
				}
			}
		}
	}
	cout << dp[n -1][Vec[n - 1]] << endl;
}

int main()
{
	solve();
	return(0);
}