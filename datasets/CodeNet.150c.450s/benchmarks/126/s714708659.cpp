#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
  int dp[17][17];
  bool flag[17][17];
  int W, H;
  
  while(cin >> W >> H){
    if(W == 0 && H == 0) break;
    memset(flag, 1, sizeof(flag));
    memset(dp, 0, sizeof(dp));
    int n; cin >> n;

    int x, y;
    for(int i = 0 ; i < n ; i++){
      cin >> x >> y;
      flag[y][x] = 0;
    }

    for(int i = 1 ; i <= H ; i++){
      for(int j = 1 ; j <= W ; j++){
	if(i == 1 && j == 1) dp[i][j] = 1;
	else dp[i][j] = dp[i-1][j] + dp[i][j-1];
	if(!flag[i][j]) dp[i][j] = 0;
      }
    }
    
    /* for(int i = 1 ; i <= H ; i++){
      for(int j = 1 ; j <= W ; j++){
	cout << dp[i][j]<< ' ';
      }
      cout << endl;
      }*/

    cout << dp[H][W] << endl;
  }
  return 0;
}