#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;




int main(){
	int n, m;
	int INF = 9999999;

	cin >> n >> m;
	int c[m];
	int dp[m+1][n+1];
	for(int i=0 ; i<m ; i++){
		cin >> c[i];
	}

	for(int i=0 ; i<=m ; i++){
		for(int j=0 ; j<=n ; j++){
			dp[i][j] = 0;
		}
	}
	for(int j = 0 ; j<=n ; j++){
		dp[0][j] = INF;
	}


	for(int i=1 ; i<=m ; i++){
		for(int j=1 ; j<=n ; j++){

			if(c[i-1] > j){
				dp[i][j] = dp[i-1][j];
			}else{
				dp[i][j] = min(dp[i-1][j], dp[i][j - c[i-1]] + 1);	
			}
			
		}
	}
	cout << dp[m][n] << endl;

	return 0;
}