#include <iostream>
using namespace std;
int n, a[111], b[111], dp[111][111];
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
	for(int i = 2; i <= n; i++) {
		for(int j = 0; j <= n - i; j++) {
			int l = j, r = j + i; // [l, r)
			dp[l][r] = 999999999;
			for(int k = l + 1; k < r; k++) {
				dp[l][r] = min(dp[l][r], dp[l][k] + dp[k][r] + a[l] * a[k] * b[r - 1]);
			}
		}
	}
	cout << dp[0][n] << endl;
}