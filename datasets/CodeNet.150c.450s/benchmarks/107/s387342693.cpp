#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  int dp[s1.size() + 10][s2.size() + 10];
  for (int i = 0; i < s1.size() + 10; i++)
  {
    for (int j = 0; j < s2.size() + 10; j++)
    {
      dp[i][j] = 0;
    }
  }
  for (int i = 1; i <= s1.size(); i++)
    dp[i][0] = i;
  for (int j = 1; j <= s2.size(); j++)
    dp[0][j] = j;

  for (int i = 1; i <= s1.size(); i++)
  {
    for (int j = 1; j <= s2.size(); j++)
    {
      // s1[i]を削除するかs1[i + 1]にs2[j]と同じ文字を挿入するか
      int m = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
      if (s1[i - 1] == s2[j - 1])
      {
        // 最後の文字が同じだから最後の文字がなくても編集距離は同じ
        m = min(m, dp[i - 1][j - 1]);
        dp[i][j] = m;
      }
      else
      {
        // 最後の文字を置換する
        m = min(m, dp[i - 1][j - 1] + 1);
        dp[i][j] = m;
      }
    }
  }
  cout << dp[s1.size()][s2.size()] << endl;
  return 0;
}
