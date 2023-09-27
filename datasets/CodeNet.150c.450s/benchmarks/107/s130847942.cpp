#include <bits/stdc++.h>
using namespace std;
int levenshtein_distance(string s1, string s2) {
	vector<vector<int> > dp(s1.size() + 1, vector<int>(s2.size() + 1));
	for(int i = 0; i <= s1.size(); i++) {
		for(int j = 0; j <= s2.size(); j++) {
			if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else {
				dp[i][j] = min({dp[i][j - 1] + 1, dp[i - 1][j] + 1, dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])});
			}
		}
	}
	return dp[s1.size()][s2.size()];
}
string s, t;
int main() {
	cin >> s >> t;
	cout << levenshtein_distance(s, t) << endl;
	return 0;
}