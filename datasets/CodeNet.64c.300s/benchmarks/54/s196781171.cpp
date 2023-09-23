#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)

unsigned long long c[21], d[21];

int main() {

  int n, x;
  scanf("%d", &n);
  scanf("%d", &x);
  rep (i,21) { c[i] = d[i] = 0; }
  c[x] = 1;
  rep (i, n-2) {
    int x; scanf("%d", &x);
    rep (k, 21) {
      if (k-x >= 0) d[k - x] += c[k];
      if (k+x < 21) d[k + x] += c[k];
    }
    rep (k, 21) { c[k] = d[k]; d[k] = 0; }
  }

  {
    int x; scanf("%d", &x);
    printf("%Ld\n", c[x]);
  }

  return 0;
}