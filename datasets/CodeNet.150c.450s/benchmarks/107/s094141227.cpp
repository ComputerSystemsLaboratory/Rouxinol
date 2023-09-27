#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int levenshtein(string s1, string s2) {
	int len1 = s1.size(),
	    len2 = s2.size();
	vector<vector<int>>dp(len1+1, vector<int>(len2+1));
	for (auto i = 0; i <= len1; i++) dp[i][0] = i;
	for (auto i = 0; i <= len2; i++) dp[0][i] = i;
	for (auto i = 1; i <= len1; i++) {
		for (auto j = 1; j <= len2; j++) {
			int cost = !(s1[i-1] == s2[j-1]);
			dp[i][j] = min({
					dp[i-1][j]+1,
					dp[i][j-1]+1,
					dp[i-1][j-1]+cost
					});
		}
	}
	return dp[len1][len2];
}

int main() {
	string s1, s2;
	cin>>s1>>s2;
	cout << levenshtein(s1, s2) << endl;
	return 0;
}