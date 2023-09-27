#include<iostream>
using namespace std;

int main(){
  int n,weight;

  cin >> n >> weight;

  int v[n],w[n];

  int dp[n+1][weight+1];

  for(int i=0; i<n; i++){
    cin >> v[i] >> w[i];
  }

  for(int i=0; i<weight+1; i++){
    dp[0][i] = 0;
  }

  for(int i=1; i<n+1; i++){
    for(int j=0; j<weight+1; j++){
      if(j<w[i-1]){
        dp[i][j] = dp[i-1][j];
      }

      else{
        dp[i][j] = max(dp[i-1][j] , dp[i-1][j-w[i-1]] + v[i-1]);
      }
    }
  }

  cout << dp[n][weight] << endl;

  return 0;
}