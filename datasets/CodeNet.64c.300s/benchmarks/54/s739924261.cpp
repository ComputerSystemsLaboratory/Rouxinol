#include<iostream>
#include<cstring>

int n;
int v[101];
long long dp[101][21];

long long calc(int i,int j){
	if(j>20||j<0)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	if(i==n-1&&j==v[n-1])return 1;
	else if(i==n-1&&j!=v[n-1])return 0;

	long long ans=0;
	ans+=calc(i+1,j+v[i]);
	ans+=calc(i+1,j-v[i]);
	return dp[i][j]=ans;
}

int main(){
	memset(dp,-1,sizeof(dp));
	std::cin>>n;
	for(int i=0;i<n;i++)std::cin>>v[i];
	std::cout<<calc(1,v[0])<<std::endl;;
	return 0;
}