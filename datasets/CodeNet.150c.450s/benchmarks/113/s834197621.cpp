#include<cstdio>

int main() {
  int n = 0;
  int i = 1;
  while(scanf("%d", &n)) {
    if (n == 0) break;
    printf("Case %d: %d\n", i, n);
    ++i;
  }
}