#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define INF (1<<30)
using namespace std;

/* references <https://en.wikipedia.org/wiki/Levenshtein_distance> */
int main() {
	cin.tie(0);ios::sync_with_stdio(false);
	string s1, s2; cin >> s1 >> s2;
	vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1));

	//	initialize
	dp[0][0] = 0;
	for (int i = 1; i <= s1.length();i++) dp[i][0] = i;
	for (int i = 1; i <= s2.length();i++) dp[0][i] = i;

	int cost;
	for (int i = 1;i <= s1.length();i++) {
		for (int j = 1;j <= s2.length();j++) {
			if (s1[i - 1] == s2[j - 1])	cost = 0;
			else cost = 1;
			dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
			dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + cost);
		}
	}
	cout << dp[s1.length()][s2.length()] << endl;
}