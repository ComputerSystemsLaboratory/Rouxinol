#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int n;
    int m;
    int p;
    int sum = 0;
    int k;

    scanf("%d%d%d", &n, &m, &p);
    if (n == 0 && m == 0 && p == 0) return 0;

    for (int i=0; i<n; i++) {
      int x;

      scanf("%d", &x);
      if (i == m-1) k = x;
      sum += x;
    }

    if (k == 0) puts("0");
    else printf("%d\n", sum*(100-p)/k);
  }
}