#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define LATTE 1000000000

int main(){
	int N;
	while(cin>>N,N){
		int dp[10][10]={},A,B,C;
		bool latte[10]={};
		for(int i=0;i<10;i++)for(int j=0;j<10;j++) if(i!=j) dp[i][j]=LATTE;
		for(int i=0;i<N;i++){
			cin>>A>>B>>C;
			dp[A][B]=dp[B][A]=C;
			latte[A]=latte[B]=true;
		}
		for(int k=0;k<10;k++){
			for(int i=0;i<10;i++){
				for(int j=0;j<10;j++){
					dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
				}
			}
		}
		int _min=LATTE,ans;
		for(int i=0;i<10;i++){
			if(!latte[i]) continue;
			int sum=0;
			for(int j=0;j<10;j++){
				if(!latte[j]) continue;
				if(dp[i][j]==LATTE){
					sum=LATTE;
					break;
				}
				sum += dp[i][j];
			}
			if(_min>sum){
				_min = sum; ans = i;
			}
		}
		printf("%d %d\n",ans,_min);
	}
}