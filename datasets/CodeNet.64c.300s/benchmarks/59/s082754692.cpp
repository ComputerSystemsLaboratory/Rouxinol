#include <stdio.h>

int nextInt() { int d; scanf("%d", &d); return d; }

int main() {
  int n = nextInt();
  
  int count = 0;
  
  for (int i = 0; i < n; i++) {
    int x = nextInt();
    if (x == 2 || x == 3) {
      count++;
      continue;
    }
    for (int j = 2; j * j <= x; j++) {
      if (x % j == 0) {
        break;
      }
      if ((j + 1) * (j + 1) > x) {
        count++;
      }
    }
  }
  printf("%d\n", count);
  
  return 0;
}