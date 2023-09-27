#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int bzmax = 60;

typedef class LinearBasis {
  public:
    ll a[bzmax];
  
    void insert(ll x) {
      for (int i = bzmax; i-- && x; ) {
        if ((x >> i) & 1) {
          x ^= a[i];
        }
        if ((x >> i) & 1) {
          a[i] = x;
          break;
        }
      }
    }
    bool query(ll x) {
      for (int i = bzmax; i-- && x; ) {
        if ((x >> i) & 1) {
          x ^= a[i];
        }
      }
      return !x;
    }
    
    void reset() {
      memset(a, 0, sizeof(a));
    }
} LinearBasis;

const int N = 205;

int T, n;
ll a[N];
char s[N];
LinearBasis lb;

void solve() {
  lb.reset();
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%lld", a + i);
  }
  scanf("%s", s + 1);
  for (int i = n; i; i--) {
    if (s[i] == '1') {
      if (!lb.query(a[i])) {
        puts("1");
        return;
      }  
    } else {
      lb.insert(a[i]);
    }
  }
  puts("0");
}

int main() {
  scanf("%d", &T);
  while (T--) {
    solve();
  }
  return 0;
}
