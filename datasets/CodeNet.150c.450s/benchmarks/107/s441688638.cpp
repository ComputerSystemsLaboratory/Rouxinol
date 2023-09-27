#include <iostream>
#include <string>

using namespace std;

string s1, s2;
int dp[1001][1001];

int get_min(int x, int y, int z)
{
	int ret;
	if (x <= y && x <= z) {
		ret = x;
	} else if (y <= z) {
		ret = y;
	} else {
		ret = z;
	}
	return ret;
}

int main(void)
{
	cin >> s1;
	cin >> s2;
	for (int i = 1; i <= s1.length(); i++) {
		dp[i][0] = i;
	}
	for (int i = 1; i <= s2.length(); i++) {
		dp[0][i] = i;
	}
	for (int i = 1; i <= s1.length(); i++) {
		for (int j = 1; j <= s2.length(); j++) {
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			} else {
				dp[i][j] = get_min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
			}
		}
	}
	cout << dp[s1.length()][s2.length()] << endl;
	return 0;
}
			