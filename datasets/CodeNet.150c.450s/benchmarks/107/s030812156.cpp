#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> P;
struct pos {
  int row;
  int column;
};
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Sort(a) sort(a.begin(), a.end())
const int INF = 1 << 30;
const ll MOD = 1000000007;
int main(void) {
  string s1, s2;
  cin >> s1 >> s2;
  int dp[1001][1001];
  rep(i, 1001) {
    rep(j, 1001) { dp[i][j] = INF; }
  }

  dp[0][0] = 0;
  for (int i = 0; i <= s2.size(); i++) {
    dp[0][i] = i;
  }

  for (int j = 0; j <= s1.size(); j++) {
    dp[j][0] = j;
  }

  for (int i = 0; i < s1.size(); i++) {
    for (int j = 0; j < s2.size(); j++) {
      if (s1[i] == s2[j]) {
        dp[i + 1][j + 1] = min(dp[i][j], dp[i + 1][j + 1]);
      } else {
        dp[i + 1][j + 1] =
            min(dp[i][j] + 1, min(dp[i][j + 1] + 1, dp[i + 1][j] + 1));
      }
    }
  }

  cout << dp[s1.size()][s2.size()] << endl;
  return 0;
}
