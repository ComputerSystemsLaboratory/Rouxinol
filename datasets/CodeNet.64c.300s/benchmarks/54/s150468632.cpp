#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
const int INF=INT_MAX,MOD=1e9+7;

int main(){
	int n; cin>>n;
	int a[n]; rep(i,n) cin>>a[i];
	long long dp[110][25]; rep(i,110)rep(j,25) dp[i][j]=0;
	dp[1][a[0]]=1;

	for(int pick=2;pick<n;pick++){
		for(int sum=0;sum<25;sum++){
			if(0<=sum-a[pick-1]&&sum-a[pick-1]<=20&&0<=sum+a[pick-1]&&sum+a[pick-1]<=20) dp[pick][sum]=dp[pick-1][sum-a[pick-1]]+dp[pick-1][sum+a[pick-1]];
			else if(0<=sum-a[pick-1]&&sum-a[pick-1]<=20) dp[pick][sum]=dp[pick-1][sum-a[pick-1]];
			else if(0<=sum+a[pick-1]&&sum+a[pick-1]<=20) dp[pick][sum]=dp[pick-1][sum+a[pick-1]];
		}
	}
	cout<<dp[n-1][a[n-1]]<<endl;
	return 0;
}

