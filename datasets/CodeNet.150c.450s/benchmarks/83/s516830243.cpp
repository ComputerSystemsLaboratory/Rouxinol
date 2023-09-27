#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int N,W,v[1001],w[1001];
	int dp[10010];
	cin >> N >> W;
	for(int i=0;i<N;i++){
		cin >> v[i] >> w[i];
	}
	for(int i=0;i<=W;i++){
		dp[i] = -1;
	}
	dp[0] = 0;
	for(int i=0;i<N;i++){
		for(int j=W;j>=0;j--){
			if(j+w[i] > W) continue;
			if(dp[j]==-1) continue;
			dp[j+w[i]]=max(dp[j+w[i]],dp[j]+v[i]);
		}
	}
	int ans = 0;
	for(int i=0;i<=W;i++){
		ans = max(ans,dp[i]);
	}
	cout << ans << endl;
}