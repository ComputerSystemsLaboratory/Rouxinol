#include <cstdio>
#include <vector>

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

template<typename T>
inline int size(T container) {
  return static_cast<int>(container.size());
}

vector<pair<int, int>> factor(int n) {
  vector<bool> f; // true if composite
  vector<pair<int, int>> primaries;
  auto reduce =
    [&](int p) {
      int a = 0;
      while (n % p == 0) {
        n /= p;
        a++;
      }
      if (a)
        primaries.emplace_back(p, a);
    };
  auto is_prime =
    [=](int p) {
      int i = p / 2 - 1;
      return !(i < size(f) && f[i]);
    };
  auto mark_composite =
    [&](int c) {
      int i = c / 2 - 1;
      f.resize(i + 1, false);
      f[i] = true;
    };
  reduce(2);
  for (int p = 3; p * p <= n; p += 2)
    if (is_prime(p)) {
      reduce(p);
      int q = 2 * p;
      for (int c = p * p; c * c <= n; c += q)
        mark_composite(c);
    }
  if (n > 1)
    primaries.emplace_back(n, 1);
  return primaries;
}

signed main() {
  int n = rint();
  printf("%lld:", n);
  for (auto primary : factor(n))
    dotimes(i, primary.second)
      printf(" %lld", primary.first);
  puts("");
  return 0;
}

