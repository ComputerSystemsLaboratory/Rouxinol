#include <iostream>
using namespace std;
int dp[8192];

void goup() {
	dp[0] = 1; dp[1] = 1; dp[2] = 2;

	for (int i = 3; i < 8192; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	return;
}

int main() {
	int n;
	goup();

	while (1) {
		cin >> n;
		if (n == 0) break;
		cout << dp[n] / (365 * 10) + 1 << endl;
	}
	return 0;
}