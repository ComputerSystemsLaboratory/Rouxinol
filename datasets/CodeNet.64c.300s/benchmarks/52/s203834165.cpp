#include <cstdio>
#include <map>
using namespace std;

int n;
int s;

int main() {
  while (1) {
    scanf("%d%d", &n, &s);
    if (n == 0 && s == 0) return 0;

    int lim = 1 << 10;
    int ans = 0;
    for (int i=0; i<lim; i++) {
      int sum = 0;
      int cnt = 0;

      for (int j=0; j<10; j++) {
        if (i >> j & 1) {
          sum += j;
          cnt++;
        }
      }

      if (sum == s && cnt == n) ans++;
    }

    printf("%d\n", ans);
  }
}