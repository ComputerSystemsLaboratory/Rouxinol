#include <bits/stdc++.h>

using namespace std;
#define all(a)a.begin(),a.end()
using ll=long long;
const int INF = 1<<30;
const ll INFll =1LL<<62;
const int mod =(1e9)+7;
using P = pair<ll,ll>;

int main(){
    string s;cin >>s;
    string t;cin >>t;
    ll n=s.size();
    ll m=t.size();
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,INF));
    for (int i = 0; i <=n; ++i) {
        dp[i][0]=i;
    }
    for (int j = 0; j <= m; ++j) {
        dp[0][j]=j;
    }
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < m; ++j) {
            ll cost=(s[i]==t[j])?0:1;
            dp[i+1][j+1]=min({dp[i][j+1]+1,dp[i+1][j]+1,dp[i][j]+cost});
        }
    }
//    for (int i = 0; i <= n; ++i) {
//        for (int j = 0; j <=m; ++j) {
//            cout <<dp[i][j]<<" ";
//        }
//        cout <<endl;
//    }
    cout <<dp[n][m]<<endl;
    return 0;
}


