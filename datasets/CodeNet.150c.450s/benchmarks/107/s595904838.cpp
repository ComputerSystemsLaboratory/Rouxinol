#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int min(int a, int b, int c) {
	int d = (a > b ? b : a);
	return d > c ? c : d;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s1, s2;
	int dp[1001][1001];
	cin >> s1 >> s2;
	
	int size1 = s1.size();
	int size2 = s2.size();
	for (int i = 0; i <= size1; i++) {
		for (int j = 0; j <= size2; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = (i > j ? i : j);
			} else if (s1[i-1] == s2[j-1]) {
				dp[i][j] = dp[i - 1][j - 1];
			}  else {
				dp[i][j] = min(dp[i-1][j-1] + 1,
							dp[i-1][j] + 1, dp[i][j-1] + 1);
			}
		}
	}
	cout << dp[size1][size2] << endl;
	return 0;
}