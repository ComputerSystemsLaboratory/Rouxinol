#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

template<class T>
bool chmax(T &a,const T &b) {
    if(a<b) {
        a=b;
        return true;
    }
    return false;
}

int N,W;
struct Goods {
    int w,v;
};
Goods gs[102];
int dp[102][10004];
int main() {
    cin>>N>>W;
    rep(i,N) cin>>gs[i].v>>gs[i].w;

    rep(i,N) rep(w,W+1) {
        chmax(dp[i+1][w],dp[i][w]);
        if(w-gs[i].w<0) continue;
        chmax(dp[i+1][w],dp[i][w-gs[i].w]+gs[i].v);
    }
    /*
    rep(i,N+1) {
        cout<<i<<" : ";
        rep(w,W+1) cout<<dp[i][w]<<" ";
        cout<<endl;
    }
    */
    cout<<dp[N][W]<<endl;
    return 0;
}