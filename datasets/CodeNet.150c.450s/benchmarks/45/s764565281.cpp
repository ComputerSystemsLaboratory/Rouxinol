#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<typename T> struct Mod {
  vector<T> fact, factInv;
  Mod() {}
  Mod(T n, T p = 1e9 + 7) : fact(n + 1), factInv(n + 1) {
    fact[0] = 1;
    for (T i = 1; i < n + 1; ++i) fact[i] = fact[i - 1] * i % p;
    for (T i = 0; i < n + 1; ++i) factInv[i] = modPow(fact[i], p - 2, p);
  }
  T modPow(T x, T n, T m) {
    if (n == 0) return 1;
    T res = modPow(x * x % m, n / 2, m);
    if (n & 1) res = res * x % m;
    return res;
  }
  T modComb(T n, T k, T p = 1e9 + 7) {
    return ((fact[n] * factInv[k]) % p * factInv[n - k]) % p;
  }
};

const ll MOD = 1e9 + 7;

int main() {
  int m, n; cin >> m >> n;
  Mod<ll> md;
  cout << md.modPow(m, n, MOD) << endl;
  return 0;
}

