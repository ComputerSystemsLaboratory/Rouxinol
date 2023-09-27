#include <iostream>

using namespace std;

int main(void){
  
  int a,b;
  int n;
  int dp[17][17];
  int x,y;
  
  
  while(1){

    cin >> a >> b;
    if( a == 0 && b == 0 )break;
    
    for( int i = 0 ; i <= a ; i++ ){
      for( int j = 0 ; j <= b ; j++ ){
	dp[i][j] = 0;
      } 
    }
    
    cin >> n;
    while(n--){
      cin >> x >> y;
      dp[x][y] = -1;
    }

    dp[1][1] = 1;

    for( int i = 1 ; i <= a ; i++ ){
      for( int j = 1 ; j <= b ; j++ ){
	if( i == 1 && j == 1 ) continue;
	if( dp[i][j] == -1 ){
	  dp[i][j] = 0;
	  continue;
	}
	dp[i][j] = dp[ i - 1 ][j] + dp[i][ j - 1 ];
      }
    }
    cout << dp[a][b] << endl;
  }
  return 0;
}