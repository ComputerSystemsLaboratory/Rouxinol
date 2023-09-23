#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
  int a, b, n;
  int c, d;
  int dp[17][17];
 
  while(1) {
    cin >> a >> b;
    if(a == 0 && b == 0) break;
 
    for(int i = 0; i < 17; i++)
      for(int j = 0; j < 17; j++)
    dp[i][j] = 0;
 
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> c >> d;
      dp[d][c] = -1;
    }
 
    dp[1][1] = 1;
    for(int i = 1; i <= b; i++) {
      for(int j = 1; j <= a; j++) {
    if(i == j && i == 1) continue;
     
    if(dp[i][j] == -1) {
      dp[i][j] = 0;
      continue;
    }
 
    dp[i][j] = dp[i][j-1] + dp[i-1][j];
      }
    }
 
 
    cout << dp[b][a] << endl;
  }
   
  return 0;
}