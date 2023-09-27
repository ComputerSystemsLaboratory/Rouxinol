#include <cstdio>
using namespace std;

int n;
int m;
int ts[10000000];
int hs[10000000];

int main() {
  while (1) {
    scanf("%d%d", &n, &m);
    if (n == 0 && m == 0) return 0;

    int tsum = 0;
    for (int i=0; i<n; i++) {
      scanf("%d", &ts[i]);
      tsum += ts[i];
    }

    int hsum = 0;
    for (int i=0; i<m; i++) {
      scanf("%d", &hs[i]);
      hsum += hs[i];
    }

    int mini = 100000000;
    int ans1 = -1;
    int ans2 = -1;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        if (tsum-ts[i]+hs[j] == hsum-hs[j]+ts[i]) {
          if (mini > ts[i]+hs[j]) {
            mini = ts[i] + hs[j];
            ans1 = ts[i];
            ans2 = hs[j];
          }
        }
      }
    }

    if (ans1 == -1) puts("-1");
    else printf("%d %d\n", ans1, ans2);
  }
}