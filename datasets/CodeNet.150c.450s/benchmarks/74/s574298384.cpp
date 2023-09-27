#include<bits/stdc++.h>
#define INF 999999999

using namespace std;

const int MAX_N = 50000;
const int MAX_M = 20;

int dp[MAX_M+1][MAX_N+1];
int c[MAX_N];

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> c[i];
	}
	for(int i=0;i<=m;i++){
		dp[i][0] = 0;
	}
	for(int j=0;j<=n;j++){
		dp[0][j] = INF;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j>=c[i-1]){
				dp[i][j] = min(dp[i-1][j],dp[i][j-c[i-1]] + 1);
			}else{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[m][n] << "\n";
}