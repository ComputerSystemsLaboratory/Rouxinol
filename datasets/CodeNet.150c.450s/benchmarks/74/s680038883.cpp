#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  999999999
#define pa pair<int,int>
using namespace std;


int main(){
int c[22],n,m;
cin>>n>>m;
for(int i=0;i<m;i++) cin>>c[i];
static int dp[22][50010];
for(int i=0;i<m+1;i++){
for(int j=0;j<n+1;j++) dp[i][j]=inf;
dp[i][0]=0;
}

for(int i=0;i<m;i++){
for(int j=0;j<c[i];j++) dp[i+1][j]=dp[i][j];
for(int j=c[i];j<n+1;j++){
dp[i+1][j]=min(dp[i+1][j-c[i]]+1,dp[i][j]);
}
}

cout<<dp[m][n]<<endl;

return 0;
}