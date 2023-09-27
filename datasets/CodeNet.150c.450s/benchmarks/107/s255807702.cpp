#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string s1, s2;

void solve() {
  int dp[s1.size() + 1][s2.size() + 1];
  for (int i = 0; i <= s1.size(); i++) {
    dp[i][0] = i;
  }
  for (int i = 0; i <= s2.size(); i++) {
    dp[0][i] = i;
  }

  for (int i = 1; i <= s1.size(); i++) {
    for (int j = 1; j <= s2.size(); j++) {
      int flag;
      if (s1[i - 1] == s2[j - 1]) flag = 0;
      else flag = 1;
      dp[i][j] =
	min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + flag));
    }
  }
  cout << dp[s1.size()][s2.size()] << endl;
}

int main() {
  cin >> s1 >> s2;
  solve();
  return 0;
}