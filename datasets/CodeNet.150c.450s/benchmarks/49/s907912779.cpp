#include <bits/stdc++.h>

int n;
int s[128];

int main() {
  for(;;) {
    scanf("%d", &n);
    if( n == 0 ) break;
    for(int i = 0; i < n; ++i) {
      scanf("%d", &s[i]);
    }
    std::sort(s, s + n);
    int total = 0;
    for(int i = 1; i < (n - 1); ++i) {
      total += s[i];
    }
    total /= (n - 2);
    printf("%d\n", total);
  }

  return 0;
}