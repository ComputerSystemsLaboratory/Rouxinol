#include <iostream>
using namespace std;

int main(void){
  int H,W,n,x,y;
  int dp[17][17];
  
  while(1){
 
    cin >> W >> H;
    if( W == 0 && H == 0 ) break;
     
    for( int i = 0 ; i < 17 ; i++ )
      for( int j = 0 ; j < 17 ; j++ )
	dp[i][j] = 0;

    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
      cin >> x >> y;
      dp[y][x] = -1;
    }

    dp[1][1]=1;      

    for( int i = 1 ; i <= H ; i++ ){
      for( int j = 1 ; j <= W ; j++ ){

	if( i == j && i == 1) continue;
	if( dp[i][j] == -1 ){
	  dp[i][j] = 0;
	  continue;
	}
	dp[i][j] = dp[i-1][j]+dp[i][j-1];
      }
    }
    cout << dp[H][W] << endl;
    
  }
  return 0;
}