#include <bits/stdc++.h>
using namespace std;

int n;
int as[11451419];

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    for (int i=0; i<n; i++) {
      scanf("%d", &as[i]);
    }
    sort(as, as+n);

    int ans = 1145141919;
    for (int i=0; i<n-1; i++) {
      ans = min(ans, abs(as[i]-as[i+1]));
    }
    printf("%d\n", ans);
  }
}