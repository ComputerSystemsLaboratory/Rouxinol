//0-1knapsack
#include<iostream>
#include<algorithm>
using namespace std;
int dp[104][10004];
int w[105],v[10005];
const int INF=-1;
int main(){
	int N,W;//N個の品物、Wまで入る
	cin>>N>>W;
	for(int i=1;i<=N;i++)cin>>v[i]>>w[i];//vが価値、wが重さ
	for(int i=0;i<104;i++)for(int j=0;j<10004;j++)dp[i][j]=INF;
	dp[0][0]=0;
	for(int i=0;i<N;i++){
		//dp[i][j]!=INFなら、品物iを入れる状態と入れない状態に分岐
		for(int j=0;j<=W;j++){
			if(dp[i][j]!=INF){
			dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
			if(j+w[i+1]<=W){
			dp[i+1][j+w[i+1]]=max(dp[i+1][j+w[i+1]],dp[i][j]+v[i+1]);
			}
			}
		}
	}

	/*for(int i=0;i<=N;i++){
		for(int j=0;j<=W;j++)cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/
	int ans=0;
	for(int i=0;i<=W;i++)ans=max(ans,dp[N][i]);
	cout<<ans<<endl;
	return 0;
}