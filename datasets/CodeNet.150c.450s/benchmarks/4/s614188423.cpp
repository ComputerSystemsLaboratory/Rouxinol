#include <bits/stdc++.h>

int main() {

  int m, f, r;

  for(;;) {
    std::cin >> m >> f >> r;
    if( m == -1 && f == -1 && r == -1 ) {
      break;
    }

    if( m == -1 || f == -1 ) {
      std::cout << "F" << std::endl;
    }
    else if( m + f >= 80 ) {
      std::cout << "A" << std::endl;
    }
    else if( 65 <= m + f && m + f < 80 ) {
      std::cout << "B" << std::endl;
    }
    else if( 50 <= m + f && m + f < 65 ) {
      std::cout << "C" << std::endl;
    }
    else if( 30 <= m + f && m + f < 50 && r >= 50 ) {
      std::cout << "C" << std::endl;
    }
    else if( 30 <= m + f && m + f < 50 ) {
      std::cout << "D" << std::endl;
    }
    else {
      std::cout << "F" << std::endl;
    }
  }
  
  return 0;
}