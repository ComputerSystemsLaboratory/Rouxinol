#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[105][10005];
int N,W;
int v[105],w[105];

signed main(){
    memset(dp,0,sizeof(dp));
    cin>>N>>W;
    for(int i=1;i<=N;++i)cin>>v[i]>>w[i];
    for(int i=1;i<=N;++i){
        for(int j=0;j<=W;++j){
            if(j<w[i])dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    int ans=0;
    for(int i=0;i<=W;++i){
        ans=max(dp[N][i],ans);
    }
    cout<<ans<<endl;
}