#include<cstdio>
using namespace std;

int n, a, b, c, x, y[100];

int main() {
  while (1) {
    scanf("%d%d%d%d%d", &n, &a, &b, &c, &x);
    if (n == 0) break;
    for (int i = 0; i < n; i++) scanf("%d", &y[i]);
    bool end = false;
    int now = x, i, j;
    for (i = 0, j = 0; i < 10000; i++) {
      while (now != y[j]) {
        now = (now * a + b) % c;
        i++;
        if (i > 10000) break;
      }
      if (i > 10000) break;
      now = (now * a + b) % c;
      j++;
      if (j == n) {
        end = true;
        break;
      }
    }
    if (end) printf("%d\n", i);
    else printf("-1\n");
  }
}

