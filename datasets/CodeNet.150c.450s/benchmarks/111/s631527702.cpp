#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
  int N;
  int D[101];
  ll dp[101][21];
  for(int i=0; i < 101; i++){
    for(int j=0; j < 21; j++){
      dp[i][j] = 0;
    }
  }
  cin >> N;
  for(int i=0; i < N; i++){
    cin >> D[i];
  }
  dp[0][D[0]] = 1;
  for(int i=0; i < N-1; i++){
    for(int j=0; j < 21; j++){
      if(dp[i][j] == 0) continue;
      if(j+D[i+1] >= 0 && j+D[i+1] <= 20) dp[i+1][j+D[i+1]] += dp[i][j];
      if(j-D[i+1] >= 0 && j-D[i+1] <= 20) dp[i+1][j-D[i+1]] += dp[i][j];
    }
  }
  cout << dp[N-2][D[N-1]] << endl;

  return 0;
}