#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int dp[20][50001];
  int c[20];
  int n;
  int m;

  cin >> n >>m;
  for(int i=0;i<m;i++) cin>> c[i];
  sort(c,c+m);
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(i==0) dp[i][j] = j;
      else if(j==0) dp[i][j] = 0;
    }
  }

  for(int i=1;i<m;i++){
    for(int j=1;j<=n;j++){
      if(j>=c[i]) dp[i][j] = min(dp[i-1][j],dp[i][j-c[i]]+1);
      else dp[i][j] = dp[i-1][j];
    }
  }
  cout << dp[m-1][n]<<endl;
  return 0;
}