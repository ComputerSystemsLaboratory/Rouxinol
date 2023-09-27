#include <iostream>
using namespace std;
unsigned long long dp[17][17];
bool able[17][17];

int main(void){
  int n, m;
  while(cin >> n >> m, n && m){
    for(int i = 0; i < 17; i++)
      for(int j = 0; j < 17; j++){
	dp[i][j] = 0;
	able[i][j] = true;
      }
    int c;
    cin >> c;
    while(c--){
      int i, j;
      cin >> i >> j;
      able[i][j] = false;
    }

    dp[1][1] = 1;
    able[1][1] = false;

    for(int i = 1; i <= n; i++)
      for(int j = 1; j <= m; j++)
	if(able[i][j])
	  dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    
    cout << dp[n][m] << endl;
  }
  return 0;
}