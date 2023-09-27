#include <iostream>
using namespace std;

int n, q, m, a[21];
bool dp[21][2001] = { false };

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	dp[0][0] = true;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 2000; j++) {
			if (dp[i-1][j] || (j- a[i] >= 0 && dp[i-1][j - a[i]])) {
				dp[i][j] = true;
			}
		}
	}

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		cout << (dp[n][m] ? "yes" : "no") << endl;
	}

	return 0;
}