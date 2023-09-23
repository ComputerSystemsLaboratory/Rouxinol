#include<bits/stdc++.h>
using namespace std;
typedef long long int64;

int main()
{
  int n;
  int64 s[100];
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }
  int64 dp[101][21] = {{}};
  fill_n( *dp, 100 * 21, 0);
  dp[0][s[0]] = 1LL;

  for(int i = 0; i < n - 2; i++){ //ほげ！！
    for(int j = 0; j < 21; j++){
      if(j + s[i + 1] <= 20) dp[i + 1][j + s[i + 1]] += dp[i][j];
      if(j - s[i + 1] >=  0) dp[i + 1][j - s[i + 1]] += dp[i][j];
    }
  }
  cout << dp[n - 2][s[n - 1]] << endl;
}