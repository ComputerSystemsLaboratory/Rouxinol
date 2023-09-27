#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int as[100000];

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;
  
    for (int i=0; i<n; i++) {
      scanf("%d", &as[i]);
    }
  
    int l = 0;
    int r = 0;
    int cur = 0;
    int ans = as[0];
    while (l < n) {
      while (r < n && cur >= 0) {
        cur += as[r++];
        ans = max(ans, cur);
      }
  
      l = r;
      cur = 0;
    }
  
    printf("%d\n", ans);
  }
}