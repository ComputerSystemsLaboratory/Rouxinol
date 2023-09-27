#include <iostream>

using namespace std;

#define INF -1

int dp[45];

int main()
{
	for(int i = 0; i < 45; i++) { dp[i] = INF; }

	int n;

	cin >> n;

	dp[0] = 1;
	dp[1] = 1;

	for(int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n] << endl;

	return 0;
}