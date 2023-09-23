#include <cassert>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <limits.h>
#include <map>
#include <queue>
#include <set>
#include <string.h>
#include <vector>

using namespace std;
typedef long long ll;

const ll MOD = 1000000007;

ll mod_pow(ll x, ll n, ll mod = MOD) {
  ll res = 1;

  while (n > 0) {
    if (n & 1) {
      res = res * x % mod;
    }

    x = x * x % mod;
    n >>= 1;
  }

  return res;
}

ll mod_inverse(ll x, ll mod = MOD) {
  return mod_pow(x, mod - 2, mod);
}

int main() {
  int M, N;
  cin >> M >> N;

  cout << mod_pow(M, N) << endl;

  return 0;
}

