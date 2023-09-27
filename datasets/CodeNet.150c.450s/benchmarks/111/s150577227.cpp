#include<iostream>
#define MAX 100
#define NOW 110
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;
//typedef int ll;
vector<ll> vec;
ll dp[MAX][NOW];
ll n;
ll func(ll sum,ll now){
	if(sum<0||sum>20)
		return 0;
	
	if(dp[sum][now]!=-1)
		return dp[sum][now];
	if(now==n-1){
		if(vec[n-1]==sum)
			return 1;
		else
			return 0;
	}
	ll ret=0;
	ret+=func(sum-vec[now],now+1);
	ret+=func(sum+vec[now],now+1);
	return (dp[sum][now]=ret);
}
int main(){
	cin>>n;
	
	memset(dp,-1,sizeof(dp));
	//fill(dp,dp,-1);
	/*for(int i=0;i<MAX;i++){
		for(int j=0;j<NOW;j++)
			dp[i][j]=-1;
	}*/
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		vec.push_back(x);
	}
	cout<<func(vec[0],1)<<endl;
	return 0;
}