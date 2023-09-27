#include <bits/stdc++.h>

using namespace std;

int main(){
	int dp[50001];
	for(int i=0;i<50001;i++) dp[i] = 1e9;
	dp[0] = 0;
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int d;
		cin >> d;
		for(int i=0;i+d<50001;i++){
			dp[i+d] = min(dp[i+d],dp[i]+1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}