#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string s, t;

int main() {
	int n;
	cin >> n;
	while (n--) {
		//dp[i][j] := s???i??????????????§???t???j??????????????§?????£?????¨??????LCS
		vector<vector<int>> dp(2000, vector<int>(2000));
		cin >> s >> t;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < t.size(); j++) {
				if (s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
				else dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
			}
		}
		cout << dp[s.size()][t.size()] << endl;
	}
}