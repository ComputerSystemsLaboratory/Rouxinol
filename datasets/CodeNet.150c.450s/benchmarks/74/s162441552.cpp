#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	int dp[50001];
	cin >> n >> m;
	int c[10000];
	for (int i = 0; i < 50001; i++){
		dp[i] = 1<<13;
	}
	for (int i = 0; i < m; i++){
		cin >> c[i];
	}
	dp[0] = 0;
	for (int i = 0; i < m; i++){
		for (int i2 = 0; i2 + c[i] <= n; i2++){
				dp[i2 + c[i]] = min(dp[i2 + c[i]], dp[i2] + 1);
		}
	}
	cout << dp[n] << endl;
}