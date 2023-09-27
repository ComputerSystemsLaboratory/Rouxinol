#include <cstdio>

#define int long long
#define macrocat_impl(a, b) a##b
#define macrocat(a, b) macrocat_impl(a, b)
#define dotimes_impl(i, n, x) for (int i = 0, x = n; i < x; i++)
#define dotimes(i, n) dotimes_impl(i, (n), macrocat(dotimes_n_, __COUNTER__))

using namespace std;

int rint() {
  int n;
  scanf("%lld", &n);
  return n;
}

void wint(int n) {
  printf("%lld\n", n);
}

template<typename T>
inline int size(T container) {
  return static_cast<int>(container.size());
}

signed main() {
  for (;;) {
    int n = rint();
    if (n == 0)
      break;
    const int s_max = 60 * 60 * 24;
    int a[s_max] = {};
    dotimes(i, n) {
      int h, m, s;
      scanf("%lld:%lld:%lld", &h, &m, &s);
      a[s + 60 * (m + 60 * h)]++;
      scanf("%lld:%lld:%lld", &h, &m, &s);
      a[s + 60 * (m + 60 * h)]--;
    }
    int r = a[0];
    dotimes(s, s_max - 1) {
      a[s+1] += a[s];
      if (r < a[s+1])
        r = a[s+1];
    }
    wint(r);
  }
  return 0;
}

