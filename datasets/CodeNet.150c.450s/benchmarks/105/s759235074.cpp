#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <utility>
#include <queue>
#define maxn 205
using namespace std;
typedef long long ll;
typedef long double ldouble;

int n;
char s[maxn];
ll b[65], a[maxn];
bool ins(ll x) { // increase?
  for (int i = 59; i >= 0; i--) {
    if (x >> i) {
      if (!b[i]) {
        b[i] = x;
        return true;
      }
      x ^= b[i];
    }
  }
  return false;
}
void solve() {
  memset(b, 0, sizeof(b));
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
  scanf("%s", s + 1);
  for (int i = n; i >= 1; i--) {
    if (s[i] == '0') ins(a[i]);
    else {
      if (ins(a[i])) {
        puts("1");
        return;
      }
    }
  }
  puts("0");
}
int main() {
  int T;
  scanf("%d", &T);
  while (T--) solve();
  return 0;
}