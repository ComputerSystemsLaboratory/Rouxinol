#include <iostream>
#include <algorithm>
using namespace std;
int n, m, c[22], dp[50007];
int main() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) cin >> c[i];
	sort(c, c + m);
	for(int i = 1; i <= n; i++) {
		dp[i] = 999999999;
		for(int j = 0; j < m && i >= c[j]; j++) dp[i] = min(dp[i], dp[i - c[j]] + 1);
	}
	cout << dp[n] << endl;
}