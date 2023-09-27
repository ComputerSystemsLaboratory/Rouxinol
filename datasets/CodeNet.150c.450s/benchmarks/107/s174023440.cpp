#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;

int main(){
    string s,t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,0));
    dp[0][0] = 0;
    rep(i,s.size()) dp[i+1][0] = i+1;
    rep(j,t.size()) dp[0][j+1] = j+1;
    rep(i,s.size())rep(j,t.size()){
        dp[i+1][j+1] = min(dp[i+1][j],dp[i][j+1]) + 1;
        dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j] + (s[i]==t[j]?0:1));
    }
    cout << dp.back().back() << endl;
    return 0;
}
