#include <iostream>
#include <string>

using namespace std;

int main(){

  string a, b;
  cin >> a >> b;
  int dp[a.size() + 1][b.size() + 1];


  for(int i = 0; i <= a.length(); i++){
    dp[i][0] = i;
  }
  for(int i = 0; i <= b.length(); i++){
    dp[0][i] = i;
  }

  for(int i = 1; i <= a.length(); i++){
    for(int j = 1 ;j <= b.length(); j++){
      if(a[i-1] == b[j-1]){
        dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1]));
      }
      else{
        dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + 1));
      }
    }
  }

  cout << dp[a.length()][b.length()] << '\n';

  return 0;
}

