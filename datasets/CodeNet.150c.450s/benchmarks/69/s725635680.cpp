#include <cstdio>

int a[10];


int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    bool ans = true;
    for (int i = 0; i < 10; ++i) {
      scanf("%d", &a[i]);
    }
    int l, r;
    l = r = 0;
    for (int i = 0; i < 10; ++i) {
      if (a[i] > l) {
        l = a[i];
      } else if (a[i] > r) {
        r = a[i];
      } else {
        ans = false;
        break;
      }
    }
    printf("%s\n", ans ? "YES" : "NO");
  }
  return 0;
}