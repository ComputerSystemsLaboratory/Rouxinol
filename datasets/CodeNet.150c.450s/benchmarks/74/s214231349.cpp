#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;


#define INF 1e+9



int main(){

	  int n,m;
	  cin >> n >> m;
	  vector<int> c(m+1,0);
	  for(int i=1; i<=m; i++)
			cin >> c[i];

/*
	  // ???????????????
	  vvi dp(m+2,vi(n+1,INF));  
	  dp[0][0] = 0;
	  for(int i=0; i<=m; i++){
			for(int j=0; j<=n; j++){
				  dp[i+1][j] = min(dp[i][j], dp[i+1][j]); 
				  if(j+c[i] > n) continue;
				  dp[i][j+c[i]] = min(dp[i][j]+1,dp[i][j+c[i]]); 
				  dp[i+1][j+c[i]] = min(dp[i][j]+1,dp[i+1][j+c[i]]); 
			}
	  }
	  cout << dp[m][n] << endl;
*/
	  //??????????????????
	  vvi dp(m+1,vi(n+1,INF));  
	  dp[0][0] = 0;
	  for(int i=1; i<=m; i++){
			for(int j=0; j<=n; j++){
				  dp[i][j] = min( dp[i][j], dp[i-1][j]); 
				  if(j-c[i] < 0) continue;
				  dp[i][j] = min( dp[i][j], dp[i][j-c[i]] + 1 );
				  //dp[i][j] = min( dp[i][j], dp[i-1][j-c[i]] + 1); 
			}
	  }
	  cout << dp[m][n] << endl;
	  

	  // dp[i][j]: i???????????????????????§??§???j??????????????????????????????????°??????°

  

}