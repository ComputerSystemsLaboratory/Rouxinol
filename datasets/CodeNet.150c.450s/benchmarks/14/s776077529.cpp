#include <cstdio>
 
bool has3(int x) {
  while (x) {
    if (x % 10 == 3) return true;
    x /= 10;
  }
  return false;
}
 
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    int x = i;
    if (x % 3 == 0 || has3(x)) {
      printf(" %d", i);
    }
  }
  printf("\n");
  return 0;
}