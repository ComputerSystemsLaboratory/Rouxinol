#include <stdio.h>

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 9; j > i; j--) {
      if (a[j] > a[j - 1]) {
        int t = a[j];
        a[j] = a[j - 1];
        a[j - 1] = t;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
