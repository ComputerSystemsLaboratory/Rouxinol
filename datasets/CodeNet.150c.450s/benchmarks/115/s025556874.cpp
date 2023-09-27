#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;
	int dp[1001][1001];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=a.size();i++){
		for(int j=0;j<=b.size();j++){
			if(i > 0)
				dp[i][j] = max(dp[i][j],dp[i-1][j]);
			if(j > 0)
				dp[i][j] = max(dp[i][j],dp[i][j-1]);
			if(i > 0 && j > 0)
				dp[i][j] = max(dp[i][j],dp[i-1][j-1] + (a[i-1] == b[j-1] ? 1 : 0));
		}
	}
	cout << dp[a.size()][b.size()] << endl;
}
int main(void) {
	int q;
	cin >> q;
	for(int i=0;i<q;i++){
		solve();
	}
	return 0;
}