#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;

int n;
int m;
Pair ps[114514];

int main() {
  while (1) {
    scanf("%d%d", &n, &m);
    if (n == 0 && m == 0) return 0;
     
    for (int i=0; i<n; i++) {
      int d;
      int p;
      scanf("%d%d", &d, &p);
      ps[i] = Pair(p, d);
    }
    sort(ps, ps+n, greater<Pair>());
    
    int ans = 0;
    for (int i=0; i<n; i++) {
      Pair pa = ps[i];
      int p = pa.first;
      int d = pa.second;
      if (m >= d) {
        m -= d;
      } else {
        d -= m;
        m = 0;
        ans += d*p;
      }
    }
    printf("%d\n", ans);
  }
}