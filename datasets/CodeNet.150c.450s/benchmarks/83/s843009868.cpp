#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	const int MAX_N=101,MAX_W=10001,inf=-1;int dp[MAX_N][MAX_W],N,W,v[MAX_W],w[MAX_W];
	memset(dp,inf,sizeof(dp));
	cin>>N>>W;
	for(int i=1;i<=N;i++){cin>>v[i]>>w[i];}
	for(int j=0;j<=W;j++){dp[0][j]=0;}
	for(int i=1;i<=N;i++){
		for(int j=0;j<=W;j++){
			if(j - w[i] >= 0 && j-w[i]<=W)
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[N][W]<<endl;
	return 0;
}