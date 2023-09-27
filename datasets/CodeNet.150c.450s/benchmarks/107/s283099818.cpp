#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (int)N; i++)

int dp[1001][1001];
int main () {
  string s1, s2;
  cin >> s1 >> s2;

  int l1 = s1.size(), l2 = s2.size();

  for(int i = 0; i <= l1; i++) dp[i][0] = i;
  for(int j = 0; j <= l2; j++) dp[0][j] = j;

  for(int i = 0; i < l1; i++) {
    for(int j = 0; j < l2; j++) {
      dp[i+1][j+1] = dp[i][j+1] + 1;
      dp[i+1][j+1] = min(dp[i+1][j+1], min(dp[i+1][j] + 1, dp[i][j] + (s1[i] != s2[j])));
    }
  }

  cout << dp[l1][l2] << endl;
  return 0;
}