#include <iostream>
#include <vector>
#include<queue>
using namespace std;
#define loop(i,n) for (int i = 0; i < n; i++)
int main()
{
	int n;
	while (cin >> n&&n)
	{
		vector<long long int> dp(n + 1, 0);
		dp[0] = 1;
		loop(i, n)
		{
			dp[i + 1] += dp[i];
			if (i + 2 <= n)dp[i + 2] += dp[i];
			if (i + 3 <= n)dp[i + 3] += dp[i];
		}
		cout << dp[n] / 3650 + 1 << endl;
	}
	return 0;
}