#include <bits/stdc++.h>

int main() {
  
  int a, b, c;

  std::cin >> a >> b >> c;

  if( a > b ) {
    std::swap(a, b);
  }

  if( b > c ) {
    std::swap(b, c);
  }

  if( a > b ) {
    std::swap(a, b);
  }

  printf("%d %d %d\n", a, b, c);

  
  return 0;
}