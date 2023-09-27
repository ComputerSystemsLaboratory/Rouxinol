#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;

int n,t;
ll a[105],dp[105][105];

ll solve(int i,int j) {
	if (i==j) return 0;
	if (dp[i][j]) return dp[i][j];
	dp[i][j]=INF;
	for (int k=i+1;k<=j;k++)
		dp[i][j]=min(dp[i][j],solve(i,k-1)+solve(k,j)+a[i]*a[k]*a[j+1]);
	return dp[i][j];
}

int main() {
	cin>>n;
	for (int i=1;i<=n;i++) if (i==n) cin>>a[i]>>a[i+1];
	else cin>>a[i]>>t;
	solve(1,n);
	cout<<dp[1][n]<<'\n';
}
