#include <iostream>
typedef long long ll;
using namespace std;
ll modpow(ll x, ll e, ll n) {
  ll res = 1;
  while (e > 0) {
    if (e % 2 == 1) {
      res = res * x % n;
    }
    e /= 2;
    x = x * x % n;
  }
  return res;
}
int main() {
  ll m, n;
  cin >> m >> n;
  cout << modpow(m, n, 1000000007) << endl;
  return 0;
}