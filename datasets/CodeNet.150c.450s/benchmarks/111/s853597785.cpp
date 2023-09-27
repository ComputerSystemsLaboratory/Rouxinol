#include<iostream>
#define INF 99999999

typedef long long ll;
using namespace std;
ll n,t[100],cnt[100][21],dp[100][21];
 
ll dfs(ll a,ll b){
	if(a==n-1){
		return (b==t[n-1]);
	}
	
	if(dp[a][b]!=-1){
		return dp[a][b];
	}

	ll ans=0;
	if(0<=b+t[a]&&b+t[a]<=20)ans+=dfs(a+1,b+t[a]);
	if(0<=b-t[a]&&b-t[a]<=20)ans+=dfs(a+1,b-t[a]);
	
	return dp[a][b]=ans;
}
int main(){
	for(int i=0;i<100;i++){
		for(int j=0;j<21;j++){
			dp[i][j]=-1;
		}
	}
	cin>>n;

	for(int i=0;i<n;i++)cin>>t[i];
	cout<<dfs(1,t[0])<<endl;

	return 0;
}