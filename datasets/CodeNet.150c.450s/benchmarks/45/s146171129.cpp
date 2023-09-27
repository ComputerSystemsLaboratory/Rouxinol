#include <cstdio>

#define int long long
#define dotimes(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int rint() {
  int n;
  scanf("%lld", &n);
  return n;
}

void wint(int n) {
  printf("%lld\n", n);
}

signed main() {
  const int modulus = 1'000'000'007;
  int m = rint();
  int n = rint();
  int r = 1;
  while (n > 0) {
    if (n & 1)
      r = r * m % modulus;
    m = m * m % modulus;
    n >>= 1;
  }
  wint(r);
  return 0;
}

