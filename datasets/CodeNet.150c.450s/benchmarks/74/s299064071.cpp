#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  int dp[21][50001];
  vector<int> c;

  //??\???
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    int tmp;
    cin >> tmp;
    c.push_back(tmp);
  }
  sort(c.begin(), c.end());

  //dp?????????
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i <= n; i++) dp[0][i] = i;

  //???????¨?????????§?§£???
  for(int i = 1; i < m; i++){
    for(int j = 0; j <= n; j++){
      if(j-c[i] >= 0) dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
      else dp[i][j] = dp[i-1][j];
    }
  }

  cout << dp[m-1][n] << endl;

  return 0;
}