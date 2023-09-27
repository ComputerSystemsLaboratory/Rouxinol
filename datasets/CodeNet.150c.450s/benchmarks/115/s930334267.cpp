#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, l1, l2;
	string s1, s2;

	cin >> n;
	while (n--) {
		cin >> s1 >> s2;
		l1 = s1.size();
		l2 = s2.size();

		int dp[l1 + 1][l2 + 1];
		for (int i = 0; i <= l1; i++) {
			for (int j = 0; j <= l2; j++) {
				dp[i][j] = 0;
			}
		}
		for (int i = 1; i <= l1; i++) {
			for (int j = 1; j <= l2; j++) {
				if (s1[i - 1] == s2[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[l1][l2] << endl;
	}

	return 0;
}