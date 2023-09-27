#include <stdio.h>
#define rep(i, a) for(int i = 0; i < a; ++i)

typedef long long ll;

int main(void) {
  ll i, j, k, n, m, l;
  scanf("%lld%lld%lld", &n, &m, &l);
  ll a[n][m], b[m][l], c[n][l];
  rep(i, n) rep(j, m) scanf("%lld", &a[i][j]);
  rep(i, m) rep(j, l) scanf("%lld", &b[i][j]);
  rep(i, n) rep(j, l) c[i][j] = 0;
  rep(i, n) rep(j, l) rep(k, m) c[i][j] += a[i][k] * b[k][j];
  rep(i, n) rep(j, l) {
    if(j != l - 1) printf("%lld ", c[i][j]);
    else printf("%lld\n", c[i][j]);
  }
  return 0;
}
