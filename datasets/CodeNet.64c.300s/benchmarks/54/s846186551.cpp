#include <vector>
#include <iostream>
using namespace std;

typedef long long ll;

int n, a[109]; ll dp[109][22];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	n--; dp[0][a[0]] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j - a[i] >= 0) dp[i][j] += dp[i - 1][j - a[i]];
			if (j + a[i] <= 20) dp[i][j] += dp[i - 1][j + a[i]];
		}
	}
	cout << dp[n - 1][a[n]] << endl;
	return 0;
}