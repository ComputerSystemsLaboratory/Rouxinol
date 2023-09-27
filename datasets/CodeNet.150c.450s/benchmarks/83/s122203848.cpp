#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
int N=0,W=0;
int v[110]={0},w[110]={0};
int dp[110][10010]={0};
int main(void){
	
	cin>>N>>W;
	for(int i=0;i<N;i++){
		cin>>v[i]>>w[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<=W;j++){
			if(w[i]<=j){
				dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
			}
			else{
				dp[i+1][j]=dp[i][j];
			}
		}
	}
	cout<<dp[N][W]<<endl;
	return 0;
}
