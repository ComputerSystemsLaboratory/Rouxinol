#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	while(cin >> n && n)
	{
		vector<int> dp(n + 5);
		dp[0] = 1;
		for (int i = 0; i < n; i++)
		{
			dp[i + 1] += dp[i];
			dp[i + 2] += dp[i];
			dp[i + 3] += dp[i];
		}
		int days = max(dp[n] / 10, 1);
		cout << (days / 365 + !!(days % 365)) << endl;
	}
	return 0;
}