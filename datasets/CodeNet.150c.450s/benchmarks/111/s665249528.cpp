#include<bits/stdc++.h>
using namespace std;

long long dp[110][25]={};

int main(){
	long long n,a[110],ans;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	cin>>ans;
	dp[1][a[0]]=1;
	for(int i=2;i<=n-1;i++){
		for(int k=0;k<=20;k++){
			if(k-a[i-1]>=0)dp[i][k]+=dp[i-1][k-a[i-1]];
			if(k+a[i-1]<=20)dp[i][k]+=dp[i-1][k+a[i-1]];
		}
	}
	cout<<dp[n-1][ans]<<endl;
	return 0;
}

