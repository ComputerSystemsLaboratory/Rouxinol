#include <bits/stdc++.h>
using namespace std;

int m;
int nmin;
int nmax;
int ps[1000000];

int main() {
  while (1) {
    scanf("%d%d%d", &m, &nmin, &nmax);
    if ((m|nmin|nmax) == 0) return 0;

    for (int i=0; i<m; i++) {
      scanf("%d", &ps[i]);
    }

    int ans;
    int md = -1;
    for (int i=nmax; i>=nmin; i--) {
      int d = -(ps[i] - ps[i-1]);
      if (d > md) {
        md = d;
        ans = i;
      }
    }

    printf("%d\n", ans);
  }
}