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

    while(true){
        ll n; cin >> n;
        if(n == 0){
            break;
        }
        vector<ll> imos(240000);
        rep(i, n){
            string start, end; cin >> start >> end;
            ll num = 100000;
            ll start_num = 0, end_num = 0;
            rep(j, 8){
                if(j % 3 == 2){
                    j++;
                }
                start_num += (ll)(start[j] - 48) * num;
                end_num += (ll)(end[j] - 48) * num;
                num /= 10;
            }
            imos[start_num]++;
            imos[end_num]--;
        }
        
        ll ans = 0;
        rep(i, 240000){
            if(i > 0){
                imos[i] += imos[i-1];
            }
        }
        rep(i, 240000){
            if(imos[i] > ans){
                ans = imos[i];
            }
        }

        cout << ans << endl;

    }
    

}
