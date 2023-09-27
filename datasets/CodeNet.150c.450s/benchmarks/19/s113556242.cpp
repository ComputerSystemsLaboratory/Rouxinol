#include <bits/stdc++.h>

int main() {

  int a, b;
  
  for(;;) {
    scanf("%d %d", &a, &b);
    if( a == 0 && b == 0 ) break;
    if( a > b ) {
      std::swap(a, b);
    }
    printf("%d %d\n", a, b);
  }
  
  
  return 0;
}