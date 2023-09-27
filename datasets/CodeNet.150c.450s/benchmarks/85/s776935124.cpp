#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int dp[111][111],n,L[111],R[111];

int dfs(int l,int r){
	if(dp[l][r]!=-1)return dp[l][r];
	int res=1e9;
	for(int i=l;i<r;i++){
		res=min(res,dfs(l,i)+dfs(i+1,r)+L[l]*R[i]*R[r]);
	}
	return dp[l][r]=res;
}

signed main(){
	memset(dp,-1,sizeof(dp));
	r(i,111)dp[i][i]=0;
	cin>>n;
	r(i,n)cin>>L[i]>>R[i];
	cout<<dfs(0,n-1)<<endl;
}
