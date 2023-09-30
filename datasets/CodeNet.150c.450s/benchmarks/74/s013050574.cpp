#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)
int INF = 1000000007;
int dp[30][200000]; // i???????????§????????????????????£???j???????????????????°??????????????????°

int main(){
  int n,m;
  int c[30];

  cin >> n >> m; //??\???
  rep(i,m){
    cin >> c[i] ;
  }
  
  rep(j,30){    // ?????????
    rep(i,200000){  
      dp[j][i] = INF;
    }
  }
  rep(j,30){
    dp[j][0] = 0;
  }

  for(int i = 1;i<m+1;i++){
    for(int j = 0;j<n+1;j++){
      if(j-c[i-1] >= 0 )
	dp[i][j] = min( dp[i][j-c[i-1]]+1, dp[i-1][j] );
      else
 	dp[i][j] =  dp[i-1][j] ;
    }
  }
  cout << dp[m][n] << endl;
  return 0;
}