#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int dp[1001][1001] = {{0}};

  for (int i = 0; i < a.size(); i++)
  {
    dp[i+1][0] = i+1;
  }
  for (int j = 0; j < b.size(); j++)
  {
    dp[0][j+1] = j+1;
  }
  

  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < b.size(); j++)
    {
      int c = 1;
      if (a[i]==b[j])
      {
        c = 0;
      }
      
      dp[i+1][j+1] = min(dp[i][j+1]+1, min(dp[i+1][j]+1, dp[i][j]+c));
    }
  }
  cout << dp[a.size()][b.size()] << endl;

}
