#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 1010;

int main(int argc, char const *argv[]) {
  int q;
  cin >> q;
  for (auto k = 0; k < q; k++) {
    vector<vector<int>> dp(MAXN, vector<int>(MAXN, 0));
    string s1, s2;
    cin >> s1 >> s2;
    auto n = s1.size();
    auto m = s2.size();
    for (size_t i = 0; i < n; i++) {
      for (size_t j = 0; j < m; j++) {
        if (s1[i] == s2[j]) {
          dp[i + 1][j + 1] = dp[i][j] + 1;
        } else {
          dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
      }
    }
    cout << dp[n][m] << endl;
  }

  return 0;
}