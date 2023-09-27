#include <cmath>
#include <cstdlib>
#include <cstdio>

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
  long a, b;
  long x, y;
  long gcd, lcm;

  while( std::cin >> a >> b ) {
    x = a;
    y = b;

    if( x < y ) std::swap(x, y);

    while( y != 0 ) {
      x %= y;
      std::swap(x, y);
    }

    gcd = x;
    lcm = (a / gcd) * b;

    std::cout << gcd << " " << lcm << std::endl;
  }  

  return 0;
}