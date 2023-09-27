#include <cstdio>

using namespace std;

const int INF = 1000;

int n, m;
int ct[101], ch[101];
int tsum, hsum;

int main() {
  while (true) {
    scanf("%d %d", &n, &m);
    if (n == 0 && m == 0) break;
    tsum = hsum = 0;
    for (int i=0;i<n;i++) { scanf("%d", &ct[i]); tsum += ct[i]; }
    for (int i=0;i<m;i++) { scanf("%d", &ch[i]); hsum += ch[i]; }
    int min_t, min_h, min_sum = INF;
    for (int i=0;i<n;i++) {
      for (int j=0;j<m;j++) {
        if (tsum-ct[i]+ch[j] == hsum+ct[i]-ch[j]) {
          if (min_sum > ct[i]+ch[j]) {
            min_t = ct[i];
            min_h = ch[j];
            min_sum = ct[i]+ch[j];
          }
        }
      }
    }
    if (min_sum == INF) puts("-1");
    else printf("%d %d\n", min_t, min_h);
  }
  return 0;
}