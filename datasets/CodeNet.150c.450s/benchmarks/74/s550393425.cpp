#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  int dp[50001];
  int c[20];

  //??\???
  cin >> n >> m;
  for(int i = 0; i < m; i++) cin >> c[i];

  //dp?????????
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i <= n; i++) dp[i] = i;

  //???????¨?????????§?§£???
  for(int i = 1; i < m; i++){
    for(int j = 0; j <= n; j++){
      if(j-c[i] >= 0) dp[j] = min(dp[j], dp[j-c[i]]+1);
    }
  }

  cout << dp[n] << endl;

  return 0;
}