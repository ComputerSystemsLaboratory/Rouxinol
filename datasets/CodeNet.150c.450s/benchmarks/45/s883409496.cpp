#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr long long int MOD = 1000000007;

int modpow(ll a, ll ex, ll p){
    if (ex == 1) return a % p;
    if (ex % 2 == 1) return a * modpow(a, ex - 1, p) % p;
    ll t = modpow(a, ex / 2, p);
    return t * t % p;
}

int main(void){
    int m, n; cin >> m >> n;
    cout << modpow(m, n, MOD) << endl;
}

