#include <bits/stdc++.h>

long gcd(long a, long b) {
  if( a < b ) {
    std::swap(a, b);
  }
  while( b != 0 ) {
    a = a % b;
    std::swap(a, b);
  }
  return a;
}

int main(void) {

  long a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;

  return 0;
}