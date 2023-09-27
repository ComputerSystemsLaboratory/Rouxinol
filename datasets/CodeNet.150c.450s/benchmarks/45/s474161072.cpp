#include <iostream>

using namespace std;

typedef long long ll;

const ll mod = 1000000007;

ll powerMod(ll m, ll n) {
    ll x = m % mod;
    ll result = 1;
    while (n > 0) {
        if (n % 2 != 0) {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        n = n / 2;
        
    }
    return result;
}

int main() {
    ll m, n;
    cin >> m >> n;
    cout << powerMod(m, n) << endl;
    return 0;
}