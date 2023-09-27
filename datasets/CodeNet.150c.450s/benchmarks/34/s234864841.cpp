#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<int> dp(31, 0);
		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		for (int j = 3; j <= n; j++) {
			dp[j] = dp[j-1]+dp[j-2]+dp[j-3];
		}
		int y = dp[n]/3650;
		if (dp[n] % 3650 > 0) {
			y++;
		}
		cout << y << endl;
	}
	return 0;
}