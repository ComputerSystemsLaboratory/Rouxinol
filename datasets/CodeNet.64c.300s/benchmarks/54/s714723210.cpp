#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<queue>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

long long dp[101][21];

int main(){
	int n;
	cin>>n;
	
	rep(i,101)rep(j,21)dp[i][j]=0;
	
	int hand[100];
	rep(i,n){
		cin>>hand[i];
	}
	
	dp[0][hand[0]]=1;
	reps(i,1,n-1){
		rep(j,20+1){
			int pls = j+hand[i];
			int mns = j-hand[i];
			
			if(pls<=20) dp[i][pls] += dp[i-1][j];
			if(mns>=0) dp[i][mns] += dp[i-1][j];
		}
	}
	
	printf("%lld\n", dp[n-2][hand[n-1]]);
}