#include <cstdio>
#include <iostream>
#include <algorithm>



int main() {
  int a;
  scanf("%d ", &a);
  while (a) {
    int count = 0;
    int b = 1;
    for (int n = 100; n >=2; n--) {
      while (n*(2*b+n-1) / 2<a) {
        b++;
      }
      if (n*(2*b + n-1) / 2 == a)
        count++;

    }
    printf("%d\n", count);
    scanf("%d", &a);

  }
  return 0;
}