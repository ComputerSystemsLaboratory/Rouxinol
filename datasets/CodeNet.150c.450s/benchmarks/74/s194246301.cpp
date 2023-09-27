#include <iostream>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
const int INF=1e9;

using namespace std;

int n,m;
int c[21];
int dp[50004];
int main() {
    cin>>n>>m;
    rep(i,m) cin>>c[i];

    rep(i,50004) dp[i]=INF;
    dp[0]=0;

    rep(i,m) rep(j,n+1) {
        if(j-c[i]>=0)
            dp[j]=min(dp[j],dp[j-c[i]]+1);
    }

    cout<<dp[n]<<endl;

}