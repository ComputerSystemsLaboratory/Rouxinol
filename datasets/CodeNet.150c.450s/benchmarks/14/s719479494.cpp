#include <stdio.h>
 
void include3(int x, int i) {
  if(x % 10 == 3) {
    printf(" %d", i);
    return;
  }
  x /= 10;
  if(x) return include3(x, i);
  return;
}
 
int main() {
  int n;
  int i;
  int x;
 
  scanf("%d", &n);

  for(i = 1; i <= n; i++) {
    x = i;
    if(x % 3 == 0) {
      printf(" %d", i);
      continue;
    }
    include3(x, i);
  }
  printf("\n");


 
 
  return 0;
}