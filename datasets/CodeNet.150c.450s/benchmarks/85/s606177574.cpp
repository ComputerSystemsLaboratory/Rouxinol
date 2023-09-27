#include <iostream>
#include <climits>

using namespace std;
int main() {
	int n;
	cin >> n;



	int dp[n][n];

	for( int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dp[i][j] = 0;
		}
	}

	int p[n + 1];

	for ( int i = 0; i < n; i++) {
		cin >> p[i] >> p[i+1];
	}


	// |--**+-|

	// |+*---| l = 2, i = 0, j=0 : p(0) * P(1) * P (2)
	// |-+*--| l = 2, i = 1, j = 1 : p(1) * p(2) * p (3); p (i) * p(j+1) * p(i+l+1)
	// |---+*| l = 2, i = 1, j = 2
	// |-++*-| l = 3, i = 1, j = 3 : p(1) * p(3) * p(4)
	// |-****| 

	// 1 2 3   1 * 2 * 3

	for (int l = 2; l <= n; l++) {
		for (int i = 0; i < n - l + 1; i++) {
			int min = INT_MAX;
			for (int j = i; j < i + l - 1;j++ ) {
				int t = dp[i][j] + p[i] * p[j + 1] * p[i + l] + dp[j+1][i + l - 1];
				if (t < min) {
					min = t;
				}
			}
			dp[i][i + l - 1] = min;
			//cout << "i:" << i << " j:" << i + l - 1 << " max:" << min << endl;
		}
	}

	cout << dp[0][n -1] << endl;
}