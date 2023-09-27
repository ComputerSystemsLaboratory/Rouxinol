#include<iostream>
#define ll long long int 
using namespace std;
int n;
ll t[1000],dp[1000][1000];
ll func(int now,ll sum){
	if(dp[now][sum]!=-1)
	return dp[now][sum];
	if(sum<0||sum>20)
	return 0;
	if(now==n-1){
		if(sum==t[n-1])
		return dp[now][sum]=1;
		return dp[now][sum]=0;
	}
	ll pre=0;
	pre+=func(now+1,sum+t[now]);
	pre+=func(now+1,sum-t[now]);
	return dp[now][sum]=pre;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=1000;j++)
		dp[i][j]=-1;
	cin>>t[i];
	}
	func(1,t[0]);
	cout<<dp[1][t[0]]<<endl;
	return 0;
}