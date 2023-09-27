#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const static ll INF = 1e15;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// __uint128_t
const ll MOD = 1e9+7;

int main(){
    ll N; cin >> N;
    unordered_map<ll, ll> M;
    for(ll x = 1; x <= N; x++){
        for(ll y = 1; y <= N; y++){
            ll temp = 1+x*x+y*y+x*y+y+x;
            if(temp > N) break;
            for(ll z = 1; z <= N; z++){
                ll n = x*x + y*y + z*z + x*y + y*z + z*x;
                if(n > N) break;
                M[n]++;
            }
        }
    }
    for(int i = 1; i <= N; i++) cout << M[i] << endl;
} 