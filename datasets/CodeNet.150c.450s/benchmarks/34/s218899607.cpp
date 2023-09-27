#include <iostream>
using namespace std;



int main() {
  int n;
  int dp[31];
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for ( int i = 4; i <= 30; i++ ) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
 
  while ( cin >> n, n ) {
    cout << dp[n]/10/365 + 1 << endl;
  }


  return 0;
}