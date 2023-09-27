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

const int N = 2e5+23;
int a[N];

void solve() {
  int n, k; scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a+i);
    if (i >= k) {
      if (a[i] > a[i-k]) puts("Yes");
      else puts("No");
    }
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
