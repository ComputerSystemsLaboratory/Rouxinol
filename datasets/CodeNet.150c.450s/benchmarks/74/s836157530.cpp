#include<iostream>
#include<algorithm>
using namespace std;
const int INF=(1<<22);
int dp[1000000];
int d[20];
int main()
{
	int n, m; cin >> n >> m;
	fill(dp, dp + n + 1 , INF);
	for (int i = 0; i < m; ++i) {
		cin >> d[i];
	}
	dp[0] = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = d[i]; j <= n; ++j) {
			dp[j] = min(dp[j], dp[j - d[i]] + 1);
		}
	}
	cout << dp[n] << endl;
}