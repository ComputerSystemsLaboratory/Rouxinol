#include<bits/stdc++.h>
using namespace std;

int main(){

	int dp[50001];
	int n,m;
	cin >> n >> m;
	int c[m+1];
	for(int i=1;i<=m;i++) cin >> c[i];
	dp[0] = 0;
	for (int i = 1; i <=n ; ++i) 
	{
		dp[i] = -1;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m; j++){
			if(i-c[j] < 0) continue;
			if(dp[i-c[j]] != -1){
				if(dp[i] == -1)	dp[i] = dp[i-c[j]] + 1;
				else	dp[i] = min(dp[i],dp[i-c[j]]+1);
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}