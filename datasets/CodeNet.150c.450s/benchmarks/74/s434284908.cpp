#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int dp[21][50001]; // i ????????§j?????????????°?????????°?????????

int main() {
	int n,m;

	cin >> n >> m;


	int d[m];

	for (int i = 0; i < m; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < m + 1; i++) {
		for(int j = 0; j <= n; j++) {
			dp[i][j] = INT_MAX;
		}
	}

	for (int i = 1; i < m + 1; i++) {
		int curD = d[i - 1];

		for(int j = 1; j <= n; j++) {
			if (j % curD == 0) {
				dp[i][j] = j / curD; 
			} else {
				dp[i][j] = INT_MAX;
			}
			dp[i][j] = min(dp[i-1][j],dp[i][j]);

			if (j - curD > 0) {
				if (dp[i-1][j-curD] != INT_MAX) {
					dp[i][j] = min(dp[i][j] ,dp[i-1][j-curD] + 1);
				}
				if (dp[i][j-curD] != INT_MAX) {
					dp[i][j] = min(dp[i][j] ,dp[i][j-curD] + 1);
				}
			}
		}
	}

	cout << dp[m][n] << endl;
/*
	for (int i = 1; i < m + 1; i++) {
		for(int j = 1; j <= n; j++) {
			if (dp[i][j] == INT_MAX) {
				cout << setw(4) << -1;
			} else {
				cout << setw(4) << dp[i][j];
			}
		}
		cout << endl;
	}
*/

	return 0;
}