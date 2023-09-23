#include<iostream>
#include<string.h>
using namespace std;

int dp[17][17];

int main(){
	int a, b,n,ki,kj;
	while (cin >> a >> b, a != 0 && b != 0) {
		cin >> n;
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++) {
			cin >> ki >> kj;
			dp[ki][kj] = -1;
		}
		dp[1][1] = 1;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (dp[i][j] != -1 && dp[i][j - 1] != -1) {
					dp[i][j] += dp[i][j - 1];
				}
				if (dp[i][j] != -1 && dp[i - 1][j] != -1) {
					dp[i][j] += dp[i - 1][j];
				}
			}
		}
		cout << dp[a][b] << endl;
	}

	return 0;
}
