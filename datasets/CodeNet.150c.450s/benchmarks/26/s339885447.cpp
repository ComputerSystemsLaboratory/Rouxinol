#include <cstdio>
int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  if (a > b) {
    printf("a > b");
  } else if (a < b) {
    printf("a < b");
  } else {
    printf("a == b");
  }
  printf("\n");
}

