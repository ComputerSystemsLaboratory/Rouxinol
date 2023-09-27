#include <iostream>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll mod_pow(ll x, ll n, ll mod)
{
    if (n == 0) {
        return 1;
    }
    ll res = mod_pow(x * x % mod, n/2, mod);
    if (n & 1) res = res * x % mod;
    return res;
}

int main()
{
    ll m, n;
    cin >> m >> n;
    cout << mod_pow(m, n, MOD) << endl;
    return 0;
}