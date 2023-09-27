#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(var) cerr << (#var) << " = " << (var) << endl;
#else
#define debug(var)
#endif

void init() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
}

const int N = 1e5+23;

int h[N];

void solve() {
  int n; scanf("%d", &n);
  long long s = 0;
  for (int x, i = 0; i < n; ++i) {
    scanf("%d", &x);
    ++h[x];
    s += x;
  }
  int q; scanf("%d", &q);
  while (q--) {
    int b, c; scanf("%d%d", &b, &c);
    s -= 1LL*h[b]*b;
    s += 1LL*h[b]*c;
    h[c] += h[b];
    h[b] = 0;
    printf("%lld\n", s);
  }
}

int main() {
  init();
  int t = 1; //scanf("%d", &t);
  while (t--) {
    solve();
  }
  return 0;
}
