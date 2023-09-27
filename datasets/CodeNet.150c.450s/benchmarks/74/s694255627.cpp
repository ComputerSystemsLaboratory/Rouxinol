#include <iostream>
#include <string>

using namespace std;
int dp[20][50001];
int c[20];

typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j <= n; j++) {
			int* a = &dp[i][j];
			if (j == 0) {
				*a = 0;
			} else if (i == 0) {
				*a = j;
			} else if (j < c[i]) {
				*a = dp[i-1][j];
			} else {
				*a = (dp[i-1][j] > dp[i][j-c[i]] + 1 ? dp[i][j-c[i]] + 1 : dp[i-1][j]);
			}
			/*cout << *a;
			if (j == n) cout << endl;*/
		}
	}
	cout << dp[m-1][n] << endl;
	return 0;
}