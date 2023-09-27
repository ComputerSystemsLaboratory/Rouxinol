#include <bits/stdc++.h>
using namespace std;


int f(string a, string b) {
	int dp[1009][1009];

	for (int i = 0; i <= a.size(); i++) {
		for (int j = 0; j <= b.size(); j++) {
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1));
		}
	}
	return dp[a.size()][b.size()];
}

int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	/*cout << "=======" << a << "=======" << endl;
	cout << "=======" << b << "=======" << endl;*/
	cout << f(a, b) << endl;
	return 0;
}
