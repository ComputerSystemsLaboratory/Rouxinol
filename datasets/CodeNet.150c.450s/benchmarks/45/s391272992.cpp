#include <bits/stdc++.h>

using namespace std;

int64_t mod_pow(int64_t x, int64_t n, int64_t mod) {
  int64_t ret = 1;
  while(n > 0) {
    if(n & 1) (ret *= x) %= mod;
    (x *= x) %= mod;
    n >>= 1;
  }
  return ret;
}

int main() {
  int M, N;
  cin >> M >> N;
  cout << mod_pow(M, N, 1e9 + 7) << endl;
}
