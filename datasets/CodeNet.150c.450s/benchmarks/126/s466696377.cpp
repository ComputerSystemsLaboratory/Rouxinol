#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<functional>
#include<iostream>
#define INF 0
int dp[17][17];
using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	int i,j,k,notx,noty;
	int h,w,ss;
	while(1) {
		cin>>w>>h;
		if(h==0&&w==0) break;
		for(i=1;i<=h;i++) 
			for(j=1;j<=w;j++) dp[i][j]=INF;
		cin>>ss;
		for(i=1;i<=ss;i++) {
			cin>>notx>>noty;
			dp[noty][notx]=-1;
		}
		dp[1][1]=1;
		for(i=1;i<=h;i++) {
			for(j=1;j<=w;j++) {
				if(dp[i][j]!=-1 && dp[i][j]!=INF ) {
					if(dp[i+1][j]!=-1) 
						if(i+1<=h) dp[i+1][j]+=dp[i][j];
					if(dp[i][j+1]!=-1)
						if(j+1<=w) dp[i][j+1]+=dp[i][j];
				}
			}
		}
		cout<<dp[h][w]<<endl;
	}
	return 0;
}