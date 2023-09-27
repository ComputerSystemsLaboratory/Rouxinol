#include <bits/stdc++.h>
using namespace std;
int dp[20][100000];
int main(){
	int n,m;	cin>>n>>m;
	vector<int> a(m);
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(i>=a[0])	dp[0][i]=dp[0][i-a[0]]+1;
		else 	dp[0][i]=1;
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=a[i]){
				dp[i][j]=min(dp[i][j],dp[i-1][j-a[i]]+1);
				dp[i][j]=min(dp[i][j],dp[i][j-a[i]]+1);
			}
		}
	}
	cout<<dp[m-1][n]<<endl;
	return 0;
}