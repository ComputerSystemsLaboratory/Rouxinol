#include <iostream>
#include <algorithm>
#include <cstring>

#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
const int INF=1e9;
int n;
int r[102],c[102];
int p[102];

int dp[102][102];
// [i,j)
int dfs(int i,int j) {
    //cout<<i<<", "<<j<<endl;
    if(dp[i][j]!=-1) return dp[i][j];
    if(j-i==1) return r[i]*c[i]*c[j-1];
    if(i==j) return 0;
    int ret=INF;
    for(int k=i+1;k<j;k++) {
        //ret=min(ret,dfs(i,k)+dfs(k,j)+r[i]*c[k]*c[j-1]);
        ret=min(ret,dfs(i,k)+dfs(k,j)+p[i]*p[k]*p[j]);
    }

    return dp[i][j]=ret;
}

int main() {
    memset(dp,-1,sizeof(dp));
    cin>>n;
    //rep(i,n) cin>>r[i]>>c[i];
    rep(i,n+1) if(i) cin>>p[i-1]>>p[i];
    cout<<dfs(0,n)<<endl;
    return 0;
}
