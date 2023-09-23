#include <bits/stdc++.h>
using namespace std;

int x, y, s;

int tax(int a, int b) {
  return a*(100+b)/100;
}

int main() {
  while (1) {
    scanf("%d%d%d", &x, &y, &s);
    if ((x|y|s) == 0) return 0;

    int ans = 0;
    for (int i=1; i<s; i++) {
      int low = -1;
      int high = s;
      while (high - low > 1) {
        int mid = (high+low)/2;
        if (tax(i, x)+tax(mid, x) >= s) high = mid;
        else low = mid;
      }

      if (high <= 0) continue;
      if (tax(i, x)+tax(high, x) == s) ans = max(ans, tax(i, y)+tax(high, y));
    }

    printf("%d\n", ans);
  }
}