#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define br cout << "\n";
using namespace std;
const long long INF = 1e9;
const long long MOD = 1e9+7;
using Graph = vector<vector<ll>>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// a to A : -32
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

int main() {
    std::cout << std::fixed << std::setprecision(15);
    string s, t; cin >> s >> t;
    ll s_size = s.size();
    ll t_size = t.size();

    vector<vector<ll>> dp(s_size+1, vector<ll>(t_size+1));

    rep(i, s_size+1){
        dp[i][0] = i;
    }
    rep(i, t_size+1){
        dp[0][i] = i;
    }

    rep(i, s_size){
        rep(j, t_size){
            if(s[i] == t[j]){
                dp[i+1][j+1] = dp[i][j];
            }else{
                ll tmp = min(dp[i+1][j]+1, dp[i][j+1]+1);
                tmp = min(tmp, dp[i][j]+1);
                dp[i+1][j+1] = tmp;
            }
        }
    }

    cout << dp[s_size][t_size] << endl;
    

}
