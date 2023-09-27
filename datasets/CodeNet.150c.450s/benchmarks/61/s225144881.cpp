#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int x;
int cnt;

int myrand() {
  cnt++;
  int nxt = (a*x+b)%c;
  return x = nxt;
}

int main() {
  while (1) {
    int n;
    scanf("%d%d%d%d%d", &n, &a, &b, &c, &x);
    if ((n|a|b|c|x) == 0) return 0;

    cnt = 0;
    for (int i=0; i<n; i++) {
      int y;
      scanf("%d", &y);
      if (i == 0 && y == x) continue;
      while (myrand() != y) {
        if (cnt > 10000) break;
      }
    }

    if (cnt > 10000) puts("-1");
    else printf("%d\n", cnt);
  }
}