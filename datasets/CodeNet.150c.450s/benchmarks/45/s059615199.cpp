#include <iostream>
using namespace std;

#define MOD (int)1000000007

typedef long long ll;

ll power(ll e, ll x){ //e^x % MOD
    if (x == 0) return 1LL;
    if (x % 2 != 0) return ((power(e, x-1) * e) % MOD);
    ll temp = power(e, x / 2);
    return (temp * temp) % MOD;
}

void solve(void){
    int m, n;
    cin >> m >> n;
    cout << power(m, n) << endl;
}

int main(void){
  solve();
  return 0;
}

