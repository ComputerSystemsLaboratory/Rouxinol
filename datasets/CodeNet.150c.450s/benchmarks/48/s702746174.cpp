/* ?????????????????? */
#include <bits/stdc++.h>
using namespace std;

int e;

int main() {
  while (1) {
    scanf("%d", &e);
    if (e == 0) return 0;

    int ans = e;
    for (int z=0; z*z*z<=e; z++) {
      int z3 = z*z*z;
      for (int y=0; y*y+z3<=e; y++) {
        int y2 = y*y;
        ans = min(ans, y+z+e-y2-z3);
      }
    }

    printf("%d\n", ans);
  }
}