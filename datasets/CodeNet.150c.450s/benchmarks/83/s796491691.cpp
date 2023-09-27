#include<cstdio>
#include<iostream>
using namespace std;

int dp[101][10001], v[101], w[101];
int main(){
	int N, W;
	cin >> N >> W;
	for(int i=1; i<=N; i++){
		cin >> v[i] >> w[i];
	}
	for(int i=0; i<=W; i++){
		dp[0][i]=0;
	}
	for(int i=1; i<=N; i++)
		for(int j=0; j<=W; j++)
			if(w[i] > j)
				dp[i][j] = dp[i-1][j];
			else if(dp[i-1][j] >= dp[i-1][j-w[i]] + v[i])
				dp[i][j] = dp[i-1][j];
			else dp[i][j] = dp[i-1][j-w[i]] + v[i];
	cout << dp[N][W] << endl;
	return 0;
}