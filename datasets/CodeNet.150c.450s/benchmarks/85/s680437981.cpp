#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define br cout << "\n";
using namespace std;
const int INF = 1e9;
const int MOD = 1e9+7;
using Graph = vector<vector<ll>>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

ll n;
vector<vector<ll>> dp(n, vector<ll>(n, INF));  //dp[i][j] i to j min cost
vector<pair<ll,ll>> vec(n);

ll calc_mult(pair<ll,ll> a, pair<ll,ll> b){
    return a.first * a.second * b.second;
}

ll calc_sec(ll a, ll b){
    if(dp[a][b] != -1){
        return dp[a][b];
    }
    if(b == a){
        return 0;
    }
    if(b - a == 1){
        dp[a][b] = vec[a].first * vec[a].second * vec[b].second;
        return vec[a].first * vec[a].second * vec[b].second;
        //return 0;
    }


    ll res = INF;
    for(ll i = a; i < b; i++){
        res = min(res, calc_sec(a, i) + calc_sec(i+1, b) + vec[a].first * vec[i].second * vec[b].second);
    }

    dp[a][b] = res;
    return res;
}


int main() {
    std::cout << std::fixed << std::setprecision(15);
    cin >> n;

    vec.resize(n);
    rep(i, n) cin >> vec[i].first >> vec[i].second;

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }

    
    dp.resize(n, vector<ll>(n));
    dp.assign(n, vector<ll>(n, -1));
    rep(i,n){
        dp[i][i] = 0;
    }

    /*
    cout << calc_sec(0, 1) << endl;
    cout << calc_sec(0, 2) << endl;
    cout << calc_sec(0, 5) << endl;
    */
    /*
    rep(i,n){
        rep(j,n){
            cout << dp[i][j] << " ";
        }
        br;
    }
    */

    cout << calc_sec(0, n-1) << endl;







}
