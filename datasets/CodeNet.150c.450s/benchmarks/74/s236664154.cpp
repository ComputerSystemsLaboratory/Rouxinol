#include<iostream>
using namespace std;

const int inf = 555555;

int main(){

  int n,m;

  cin >> n >> m;

  int coin[m];

  for(int i=0; i<m; i++){
    cin >> coin[i];
  }

  int dp[m+1][n+1];

  for(int i=0; i<n+1; i++){
    dp[0][i] = inf;
  }

  for(int i=1; i<m+1; i++){
    for(int j=0; j<n+1; j++){
      if(j < coin[i-1]){
        dp[i][j] = dp[i-1][j];
      }
      else{
        if(dp[i][j-coin[i-1]] == inf){
          dp[i][j] = 1;
        }else{
          dp[i][j] = min(dp[i-1][j] ,dp[i][j-coin[i-1]] + 1);
        }
      }
    }
  }

  cout << dp[m][n] << endl;

  return 0;
}