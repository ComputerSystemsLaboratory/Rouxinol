#include <bits/stdc++.h>
using namespace std;
using ll=long long;
//const ll MOD=(ll)1e9+7;
const ll MOD=(ll)998244353;
const ll INF=(ll)1e18+10;
const double PI=acos(-1);

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int dy[]={-1,1,0,0};
int dx[]={0,0,-1,1};

ll dp[110][110];
int row[110],col[110];

ll dfs(int l, int r){
    if(r-l<=1) return 0;
    ll ret=INF;
    for(int i=l+1;i<r;++i){
        if(dp[l][i]==INF) dp[l][i]=dfs(l,i);
        if(dp[i][r]==INF) dp[i][r]=dfs(i,r);
        chmin(ret,dp[l][i]+dp[i][r]+row[l]*col[r-1]*row[i]);
    }
    return dp[l][r]=ret;
}

void solve(int ca){
    int N; cin>>N;
    for (int i = 0; i < N; ++i) {
        cin>>row[i]>>col[i];
    }
    for (int i = 0; i <= N; ++i) {
        for(int j=0;j<=N;++j) dp[i][j]=INF;
    }

    cout<<dfs(0,N)<<endl;

}

//#define MULTI
int main() {
#ifdef MULTI
    int N; cin>>N;
    for (int i = 0; i < N; ++i) {
        solve(i+1);
    }
#else
    solve(1);
#endif
    return 0;
}

