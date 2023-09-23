#include <iostream>
using namespace std;
int n;
unsigned long long dp[101][21];

int main () {
	int a;
	cin >> n;
	cin >> a;
	dp[0][a]++;
	for (int i = 1; i < n - 1; i++) {
		cin >> a;
		for (int j = 0; j <= 20; j++) {
			if (j - a >= 0) {
				dp[i][j - a] += dp[i - 1][j];
			}
			if (j + a <= 20) {
				dp[i][j + a] += dp[i - 1][j];
			}
		}
	}
	cin >> a;
	cout << dp[n - 2][a] << endl;
	return 0;
}