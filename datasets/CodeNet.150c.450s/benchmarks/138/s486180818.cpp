#include <bits/stdc++.h>

int main() {

  int a, b;
  
  std::cin >> a >> b;
  if( a > b ) {
    std::swap(a, b);
  }
  while( a != 0 ) {
    b = b % a;
    std::swap(a, b);
  }

  std::cout << b << std::endl;
  
  return 0;
}