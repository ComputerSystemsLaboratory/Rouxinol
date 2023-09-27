#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, W, v[100], w[100], dp[10001];
  fill_n( dp, 10001, -1);

  cin >> N >> W;
  for(int i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }
  dp[0] = 0;
  for(int i = 0; i < N; i++){
    for(int j = W; j >= w[i]; j--){
      dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    }
  }
  cout << *max_element(dp, dp + W + 1) << endl;
}