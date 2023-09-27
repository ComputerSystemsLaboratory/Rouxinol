#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
int main(){
    string s1,s2; cin>>s1>>s2;
    ll n1=s1.size(), n2=s2.size();
    vector<vector<ll>> dp(n1+1, vector<ll>(n2+1, 0));
    rep(i,n1+1) dp[i][0]=i;
    rep(i,n2+1) dp[0][i]=i;
    for(ll i=1; i<=n1; i++){
        for(ll j=1; j<=n2; j++){
            ll cost=1;
            if(s1[i-1]==s2[j-1]) cost=0;
            dp[i][j]=min(dp[i-1][j-1]+cost, min(dp[i-1][j]+1, dp[i][j-1]+1));
        }
    }
    cout<<dp[n1][n2]<<endl;
    return 0;
}
