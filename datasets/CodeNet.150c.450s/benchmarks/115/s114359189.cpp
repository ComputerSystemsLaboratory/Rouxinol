#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<cstring>

int dp[1002][1002] = { 0 };

int main() {
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		string x, y;
		int cnt = 0;
		cin >> x >> y;
		memset(dp, 0, sizeof(dp));

		for (int j = 1; j <= x.size(); ++j) {
			for (int j2 = 1; j2 <= y.size(); ++j2) {
				if (x[j - 1] == y[j2 - 1]) {
					dp[j][j2] = max(dp[j][j2 - 1], dp[j - 1][j2 - 1] + 1);
				}
				else {
					dp[j][j2] = max(dp[j][j2 - 1], dp[j - 1][j2]);
				}
			}
		}
		cout << dp[x.size()][y.size()] << endl;
	}

	return 0;
}