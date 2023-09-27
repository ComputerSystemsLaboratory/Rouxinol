#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int n, m; cin >> n >> m; //n:金額, m:コインの種類
  int c[m+1];
  for(int i=1; i<=m; i++) cin >> c[i];

  int dp[m+1][n+1]; //dp[調査した種類][円]
  for(int i=0; i<=m; i++){
    for(int j=0; j<=n; j++){
      if(i==0) dp[i][j]=INT_MAX>>3;
      else if(j==0) dp[i][j]=0;
      else dp[i][j] = 0;
    }
  }

  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      if(j<c[i]) dp[i][j] = dp[i-1][j];
      else dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
    }
  }

  cout << dp[m][n] << endl;

  return 0;
}

