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
    ll SUM = 0;
    for(int i = 0; i < N; i++){
        ll x; cin >> x; 
        M[x]++;
        SUM += x;
    }
    ll Q; cin >> Q;
    for(int i = 0; i < Q; i++){
        ll b, c; cin >> b >> c;
        ll bx = M[b];
        SUM = SUM - b*bx + c*bx;
        M[b] = 0;
        M[c] += bx;
        cout << SUM << endl;
    }
}