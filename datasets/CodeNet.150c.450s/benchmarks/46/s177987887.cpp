#include<stdio.h>
int main(){
  int n, x, ans = 0;
  int a, b, c;
  while (1) {
    scanf("%d %d", &n, &x);
    if (n == 0 && x == 0) {
      break;
    }
    for (a = 1; a <= n; a++) {
      for (b = a + 1; b <= n; b++) {
        c = x - a - b;
        if (b < c && c <= n) {
          ans++;
        }
      }
    }
    printf("%d\n", ans);
    ans = 0;
  }
}