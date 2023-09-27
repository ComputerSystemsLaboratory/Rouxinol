#include <math.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

using ll = long long;
typedef pair<ll, ll> P_ll;
typedef pair<int, int> P;

const ll INF_ll = 1e17;
const int INF = 1e8;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1, INF));
  for (int i = 0; i < s1.length() + 1; i++) {
    dp[i][0] = i;
  }
  for (int i = 0; i < s2.length() + 1; i++) {
    dp[0][i] = i;
  }

  for (int i = 0; i < s1.length(); i++) {
    for (int j = 0; j < s2.length(); j++) {
      if (s1[i] == s2[j]) {
        dp[i + 1][j + 1] = dp[i][j];
      } else {
        dp[i + 1][j + 1] = min(dp[i + 1][j], min(dp[i][j + 1], dp[i][j])) + 1;
      }
    }
  }
  // for (int i = 0; i <= s1.length(); i++) {
  //   for (int j = 0; j <= s2.length(); j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << dp[s1.length()][s2.length()] << endl;
}
