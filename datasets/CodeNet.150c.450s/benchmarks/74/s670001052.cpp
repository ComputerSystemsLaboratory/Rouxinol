#include<iostream>
using namespace std;
#define INF 1000000
int main(){
	int n,m,c[21];
	int dp[50001];
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> c[i];
	}
	for(int i=0;i<=n;i++){
		dp[i] = INF;
	}
	dp[0] = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<=n;j++){
			if(j+c[i] > n) break;
			if(dp[j]==INF) continue;
			dp[j+c[i]] = min(dp[j+c[i]],dp[j]+1);
		}
	}
	cout << dp[n] << endl;
}