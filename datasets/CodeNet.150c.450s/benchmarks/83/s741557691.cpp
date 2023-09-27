#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int N,W;
int v[110],w[110];
int dp[110][10010]; // i???????????§?????¢?????????????????£??? W??\?????§?????§?????????

int main(){

  cin >> N >> W; //??\???
  v[0] = w[0] = 0;
  rep(i,N){
    cin >> v[i+1] >> w[i+1];
  }

  rep(j,W){
    dp[0][j] = 0;
  }

  for(int i = 1; i < N+1 ;i++){
    for(int j = 0; j < W+1 ;j++){
      if(w[i] <= j){
	dp[i][j] = max(dp[i-1][j] , dp[i-1][j-w[i]] + v[i]);
      }
      else dp[i][j] = dp[i-1][j];
    }
  }

  cout << dp[N][W] << endl; 

  return 0;
}