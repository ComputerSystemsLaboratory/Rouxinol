#include<cstdio>
using namespace std;

int m, nmin, nmax, p[200];
int diff, ans;

int main() {
  while (1) {
    scanf("%d%d%d", &m, &nmin, &nmax);
    if (m == 0) break;
    diff = -1;
    for (int i = 0; i < m; i++) scanf("%d", &p[i]);
    for (int i = nmin-1; i <= nmax-1; i++) {
      if (p[i] - p[i+1] >= diff) {
        ans = i;
        diff = p[i] - p[i+1];
      }
    }
    printf("%d\n", ans + 1);
  }
}

