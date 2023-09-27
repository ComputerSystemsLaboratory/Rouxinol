#include<iostream>
#include<algorithm>

using namespace std;


int n, r[109], c[109];
long long dp[109][109];

const long long MAX = __LONG_LONG_MAX__;

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)dp[i][j] = MAX;
  }
  for(int i=0;i<n;i++)cin >> r[i] >> c[i];
  for(int i=0;i<n;i++)dp[i][i] = 0;
  for(int i=1;i<n;i++){
    for(int j=0;j+i<n;j++){
      for(int k=0;k<i;k++){
        dp[j][j+i] = min(dp[j][j+i], dp[j][j+k]+dp[j+k+1][j+i] + r[j]*c[j+k]*c[j+i]);
      }
    }
  }
  cout << dp[0][n-1] << endl;
}
