#include <iostream>
#include <algorithm>

using namespace std;

int N, M, C[21];
int dp[21][50001];
int main(){
  for(int i = 0; i < 21; i++){
    for(int k = 0; k < 50001; k++){
      dp[i][k] = 30000;
    }
  }
  for(int i = 0; i < 21; i++){
    dp[i][0] = 0;
  }
  cin >> N >> M;
  for(int i = 0; i < M; i++){
    cin >> C[i+1];
  }

  for(int i = 1; i <= M; i++){
    for(int k = 1; k <= N; k++){
      if(k >= C[i]){
	dp[i][k] = min(dp[i][k], dp[i-1][k - C[i]] + 1);
	dp[i][k] = min(dp[i][k], dp[i][k-C[i]] + 1);
      }
      dp[i][k] = min(dp[i][k], dp[i-1][k]);
    }
  }
  cout << dp[M][N] << endl;
  

}