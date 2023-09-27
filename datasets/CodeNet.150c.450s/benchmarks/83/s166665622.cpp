#include <queue>
#include <iostream>
#include <algorithm>
#define ll long long
#define INF 100000000000000
using namespace std;

int main(){
  ll N, W;
  cin >> N >> W;
  ll v[100], w[100];
  for(ll i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }
  ll dp[N+1][W+1];
  for(ll i = 0; i < N + 1; i++){
    for(ll k = 0; k < W + 1; k++){
      dp[i][k] = 0;
    }
  }

  for(ll i = 1; i <= N; i++){
    for(ll k = 1; k <= W; k++){
      dp[i][k] = dp[i-1][k];
      if(k >= w[i-1]){
	dp[i][k] = max(dp[i][k], dp[i-1][k-w[i-1]] + v[i-1]);
      }
    }
  }
  cout << dp[N][W] << endl;
  

}