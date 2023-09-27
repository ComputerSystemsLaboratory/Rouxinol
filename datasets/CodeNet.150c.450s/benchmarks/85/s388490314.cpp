#include<bits/stdc++.h>
using namespace std;

#define N 100
#define INF 1000000
int main(){
	int n, tmp, p[N + 1], dp[N + 1][N + 1];
	
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++){
		cin >> p[i-1] >> p[i];
	}
	
	for(int i = 1 ; i <= n ; i++){
		dp[i][i] = 0;
	}
	
	for(int l = 2 ; l <= n ; l++){    //l = ???????????????????????????????????????
		for(int i = 1 ; i <= n - l + 1 ; i++){
			int j = i + l - 1; 
			dp[i][j] = INF;
			for(int k = i ; k <= j - 1 ; k++){
				tmp = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
			if(dp[i][j] > tmp) dp[i][j] = tmp;
			else dp[i][j] = dp[i][j];
				}
		}
	}
	
	cout << dp[1][n] << endl;
	
	return 0;
}