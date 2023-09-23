#include <iostream>

using namespace std;

typedef unsigned long long ull;

ull pow2(ull m, ull n, const int c) {
  ull ans = 1;

  while (n > 1) {
    if (n & 1) ans = ans * m % c;
    n >>= 1;
    m = m * m % c;
  }

  return ans * m % c;
}

int main() {
  ull m, n; cin >> m >> n;

  cout << pow2(m, n, 1000000007) << endl;
}