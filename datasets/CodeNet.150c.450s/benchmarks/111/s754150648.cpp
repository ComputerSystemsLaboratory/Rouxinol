#include<iostream>
#include<string.h>
using namespace std;

int n;
int m[100];
long long dp[100][21];

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>m[i];

	memset(dp,0,sizeof(dp));dp[0][m[0]]=1;
	for(int i=1;i<n-1;i++){
		for(int j=0;j<=20;j++){
			if(j+m[i]<=20) dp[i][j+m[i]]+=dp[i-1][j];
			if(0<=j-m[i]) dp[i][j-m[i]]+=dp[i-1][j];
		}
	}

	cout<<dp[n-2][m[n-1]]<<endl;
	return 0;
}