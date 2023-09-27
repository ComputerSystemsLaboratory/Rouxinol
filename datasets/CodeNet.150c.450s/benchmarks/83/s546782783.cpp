#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[10005];
int N,W;

signed main(){
    memset(dp,0,sizeof(dp));
    cin>>N>>W;
    for(int i=1;i<=N;++i){
        int v,w;
        cin>>v>>w;
        for(int j=W;j>=0;--j){
            if(j<w)continue;
            dp[j]=max(dp[j-w]+v,dp[j]);
        }
    }
    cout<<dp[W]<<endl;
}