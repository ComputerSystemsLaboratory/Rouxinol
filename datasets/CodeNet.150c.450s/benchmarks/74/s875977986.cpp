#include <iostream>
using namespace std;
#include <algorithm>

int dp[21][50001];

int main(void){

	int n, m;
	cin >> n >> m;

	int c[21];
	for (int i = 1; i <= m; i++) cin >> c[i];

	for (int i = 0; i <= m; i++){
		
		dp[i][0] = 0;
		for (int j = 1; j <= n; j++){

			if (i == 0) dp[i][j] = 100000;
			else{
				if (j < c[i]) dp[i][j] = dp[i - 1][j];
				else dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - c[i]] + 1, dp[i][j - c[i]] + 1));
			}
		}
	}

	cout << dp[m][n] << endl;
	return 0;
}