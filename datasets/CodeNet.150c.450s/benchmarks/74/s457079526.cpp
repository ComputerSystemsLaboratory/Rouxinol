#include<iostream>
#define INF (1<<22)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n, m; cin >> n >> m;
	int d[20];
	for (int i=0;i<m;++i)cin>>d[i];
	int dp[1000000]; fill(dp, dp + n + 1, INF);
	dp[0]=0;
	for(int i=0;i<m;++i)for(int j=d[i];j<=n;++j){
		dp[j]=min(dp[j],dp[j-d[i]]+1);
	}cout<<dp[n]<<endl;
}