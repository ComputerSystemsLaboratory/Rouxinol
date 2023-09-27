#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
#define rep(i,n) for (ll i=0;i<n;++i)
#define rep2(i,a,b) for (ll i=a;i<b;++i)
const ll MOD=1000003;
const ll INF=1e9;
const ll IINF=1e18;
const double EPS=1e-8;
const double pi=acos(-1);

template<class T> inline bool chmin(T &a,T b){
    if (a>b){
        a=b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T &a,T b){
    if (a<b){
        a=b;
        return true;
    }
    return false;
}

int main(){
    string S,T;
    cin >> S >> T;
    int s=S.size(),t=T.size();
    vector<vector<int>> dp(s+1,vector<int>(t+1,INF));
    rep(i,s+1) dp[i][0]=i;
    rep(i,t+1) dp[0][i]=i;
    rep(i,s){
        rep(j,t){
            if (S[i]==T[j]) dp[i+1][j+1]=dp[i][j];
            else dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j],dp[i][j+1]))+1;
        }
    }
    cout << dp[s][t] << endl;
}
