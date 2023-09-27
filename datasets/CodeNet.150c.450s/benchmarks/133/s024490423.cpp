#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define all(x) x.begin(),x.end()
#define br cout << "\n";
using namespace std;
const long long INF = 1e10;
const long long MOD = 1e9+7;
using Graph = vector<vector<ll>>;
using pll = pair<ll, ll>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// a to A : -32
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

int main() {
    std::cout << std::fixed << std::setprecision(15);
    ll d; cin >> d;
    vector<ll> c(26);
    rep(i, 26){
        cin >> c[i];
    }
    vector<vector<ll>> vec(d, vector<ll>(26));
    rep(i, d){
        rep(j, 26){
            cin >> vec[i][j];
        }
    }
    vector<ll> t(d);
    rep(i, d){
        cin >> t[i];
        t[i]--;
    }

    ll ans = 0;
    ll day = 1;
    vector<ll> last(26);

    rep(i, d){
        rep(j, 26){
            if(t[i] == j){
                ans += vec[i][j];
                last[j] = 0;
            }else{
                last[j]++;
            }
        }

        rep(j, 26){
            ans -= c[j]*last[j];
        }

        cout << ans << endl;
    }


}