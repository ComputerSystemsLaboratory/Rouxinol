#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, W;
  int v[1000], w[1000];
  int dp[10001];

  //??\???
  cin >> N >> W;
  for(int i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }

  //dp?????????
  memset(dp, 0, sizeof(dp));
  for(int i = 0; i <= W; i++){
    if(w[0] <= i) dp[i] = v[0];
  }

  //???????¨?????????§?§£???
  for(int i = 1; i < N; i++){
    for(int j = W; j >= 0; j--){
      if(j >= w[i]) dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
    }
  }

  int ans = 0;
  for(int i = 0; i <= W; i++) ans = max(ans, dp[i]);
  cout << ans << endl;

  return 0;
}