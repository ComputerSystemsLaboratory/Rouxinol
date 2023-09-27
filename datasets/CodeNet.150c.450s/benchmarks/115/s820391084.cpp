#include<bits/stdc++.h>
using namespace std;


int main(int argc, char *argv[]){
  int n;
  cin >> n;
  for (int r = 0; r < n; r++) {

    string x, y;
    cin >> x >> y;
    int dp[y.length() + 1][x.length() + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < y.length(); i++) {
      for (int j = 0; j < x.length(); j++) {
        if(y[i] == x[j]){
          dp[i + 1][j + 1] = dp[i][j] + 1;
        }else{
          dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
      }
    }
    std::cout << dp[y.length()][x.length()] << std::endl;
  }
  return 0;
}