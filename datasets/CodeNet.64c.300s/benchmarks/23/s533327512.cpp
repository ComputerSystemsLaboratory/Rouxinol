#include<stdio.h>

int main(){
  int a, b, m, n;
  scanf("%d %d", &a, &b);
  m = a * b;
  n = 2 * (a + b);
  printf("%d %d\n", m, n);
  return 0;
}