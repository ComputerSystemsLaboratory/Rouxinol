#include<cstdio>
const int MAX_N = 100000;
const int MAX_W = 10000;
typedef long long llong;

int n, k;
llong w[MAX_N];

int check(llong P) {
  int i = 0;
  for ( int j = 0; j < k; j++ ) {
    llong s = 0;
    while( s + w[i] <= P) {
      s += w[i];
      i++;
      if ( i == n ) return n;
    }
  }
  return i;
}

int solve() {
  llong left = 0;
  llong right = n * MAX_W;
  llong mid;
  while ( right - left > 1 ) {
    mid = (left + right) / 2;
    int v = check(mid);
    if ( v >= n ) right = mid;
    else left = mid;
  }
  return right;
}

int main() {
  scanf("%d %d", &n, &k);
  for ( int i = 0; i < n; i++ ) scanf("%lld", &w[i]);
  printf("%d\n", solve());
  return 0;
}
