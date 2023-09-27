#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	while (cin >> n,n)
	{
		int dp[n+3];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int i=0; i<n; i++)
		{
			dp[i+1] += dp[i];
			dp[i+2] += dp[i];
			dp[i+3] += dp[i];
		}
		cout << dp[n]/3650 + (dp[n]%3650==0 ? 0 : 1) << endl;
	}
}