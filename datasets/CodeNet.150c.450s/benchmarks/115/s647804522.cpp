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
		dp[0][0] = (s[0] == t[0]);
		for (int i = 1; i < s.size(); i++)dp[i][0] = (bool)(dp[i-1][0] + (s[i] == t[0]));
		for (int j = 1; j < t.size(); j++)dp[0][j] = (bool)(dp[0][j-1] + (s[0] == t[j]));
		
		for (int i = 1; i < s.size(); i++) {
			for (int j = 1; j < t.size(); j++) {
				if (s[i] == t[j])dp[i][j] = dp[i-1][j-1]+1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout << dp[s.size() - 1][t.size() - 1] << endl;
	}
}