#include<iostream>
using namespace std;

unsigned long long dp[21][101] = { 0 };

int main() {
	unsigned long long n, num;
	cin >> n;
	for (unsigned long long i = 0; i < n - 1; ++i) {
		cin >> num;
		if (i == 0) {
			++dp[num][i];
		}
		else {
			for (unsigned long long j = 0; j <= 20; ++j) {
				if (dp[j][i - 1] != 0) {
					if (j + num >= 0 && j + num <= 20) {
						dp[j + num][i] += dp[j][i - 1];
					}
					if (j - num >= 0 && j - num <= 20) {
						dp[j - num][i] += dp[j][i - 1];
					}
				}
			}
		}
	}

	cin >> num;
	cout << dp[num][n - 2] << endl;

	return 0;
}