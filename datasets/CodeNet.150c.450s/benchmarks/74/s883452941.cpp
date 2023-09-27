#include <iostream>

using namespace std;

int n,m,c[20];
int dp[20][50001];

int main() {
	cin >> n >> m;
	for(int i = 0;i < m;i++) cin >> c[i];
	for(int i = 0;i < 20;i++)for(int j = 1;j < 50001;j++) dp[i][j] = 100000;
	for(int i = 0;i < m;i++) {
		for(int j = 0;j <= n;j++) {
			if(i != 0)
				dp[i][j] = min(dp[i-1][j],dp[i][j]);
			if(j >= c[i])
				dp[i][j] = min(dp[i][j-c[i]]+1,dp[i][j]);
		}
	}
	cout << dp[m-1][n] << endl;
}

