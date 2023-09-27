#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
#include<vector>
#include<stack>
#include<queue>
#include<iostream>
#define M -1
using namespace std;
int dp[101][10001];
int value[101],weight[101];
int main(void)
{
	int n,w,i,j;
	cin>>n>>w;
	for(i=0;i<n;i++) cin>>value[i]>>weight[i];
	for(i=0;i<n;i++) {
		for(j=0;j<=w;j++) dp[i][j]=M;
	}
	dp[0][0]=0;
	for(i=0;i<n;i++) {
		for(j=0;j<=w;j++) {
			if(dp[i][j]!=M) {
				dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
				if(j+weight[i]<=w) {
					dp[i+1][j+weight[i]]=max(dp[i][j]+value[i],dp[i+1][j+weight[i]]);
				}
			}
		}
	}
	int mx=-1;
	for(i=0;i<=w;i++) if(mx<dp[n][i]) mx=dp[n][i];
	cout << mx << endl;
	exit(0);
}