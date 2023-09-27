#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int dp[50001]; // j?????????????°?????????°?????????

int main() {
	int n,m;

	cin >> n >> m;


	int d[m];

	for (int i = 0; i < m; i++) {
		cin >> d[i];
	}
	for(int i = 0; i <= n; i++) {
		dp[i] = INT_MAX;
	}

	for (int i = 0; i < m; i++) {
		int curD = d[i];
		dp[curD] = 1;
		for (int j = curD + 1; j <= n; j++) {
			if (dp[j - curD] != INT_MAX) {
				dp[j] = min(dp[j] , dp[j - curD] + 1);
			}
		}
	}

	cout << dp[n] << endl;

/*
	for (int i = 0; i <= n ;i++) {
		if (dp[i] == INT_MAX) {
			cout << ".";
		} else {
			cout << dp[i];
		}
		cout << endl;
	}
 */
	return 0;
}