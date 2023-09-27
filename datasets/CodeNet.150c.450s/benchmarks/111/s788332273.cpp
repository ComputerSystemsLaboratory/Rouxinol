#include <iostream>
#include <string.h>

using namespace std;
typedef long long ll;

int main(){
  int n, s, r;
  
  cin >> n;

  ll dp[101][40];
  memset(dp, 0, sizeof(dp));

  cin >> s;
  dp[0][s+10] = 1;

  for(int i = 1; i < n-1; i++){
    cin >> s;
    
    for(int j = 10; j <= 30; j++){
      if(dp[i-1][j] != 0){
        dp[i][j+s] += dp[i-1][j];
        dp[i][j-s] += dp[i-1][j];
      }
    }
  }

  cin >> r;

  cout << dp[n-2][r+10] << endl;

  return 0;
}