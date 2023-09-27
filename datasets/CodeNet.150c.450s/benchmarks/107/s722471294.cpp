#include <iostream>
#include <string>
using namespace std;

int dp[1100][1100];

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  for (int i = 0; i < 1100; i++) {
    dp[0][i] = i;
    dp[i][0] = i;
  }
  for (int i = 1; i <= s.size(); i++) {
    for (int j = 1; j <= t.size(); j++) {
      int d = 0;
      if (s[i - 1] != t[j - 1]) {
        d = 1;
      }
      dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + d);
    }
  }
  cout << dp[s.size()][t.size()] << endl;
  return 0;
}
