#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++) 
using namespace std;
int dp[101][10001];
int main(){
    int n,w;
    cin>>n>>w;
    int v[n+1],a[n+1];
    r(i,1,n+1)cin>>v[i]>>a[i];
    r(i,1,n+1)r(j,1,w+1){
    	if(j<a[i])dp[i][j]=dp[i-1][j];
    	else dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+v[i]);
    }
    cout<<dp[n][w]<<endl;
}