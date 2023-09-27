#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string s_1, s_2;
  cin >> s_1 >> s_2;
  int l_1 = (int)s_1.size(), l_2 = (int)s_2.size();
  int dp[l_1 + 1][l_2 + 1];
  memset(dp, 0, sizeof(dp));
  rep(i, l_1+1) {
    dp[i][0] = i;
//    cout << dp[i][0];
  }
  rep(i, l_2+1) {
    dp[0][i] = i;
  }
  
  rep(i, l_1) {
    rep(j, l_2) {
      if (s_1[i] == s_2[j]) {
        dp[i+1][j+1] = min(dp[i][j], min(dp[i+1][j], dp[i][j+1]) + 1);
//        cout << dp[i+1][j+1];
      }
      else {
        dp[i+1][j+1] = min(dp[i][j], min(dp[i+1][j], dp[i][j+1])) + 1;
//        cout << dp[i+1][j+1];
      }
    }
  }
  
  cout << dp[l_1][l_2] << endl;
}
