#include <iostream>
#include <stdlib.h>

int main(void) {
  int a,b,c;
  std::cin >> a >> b >> c;
  if (a < b && b < c){
    std::cout << "Yes" << '\n';
  } else {
    std::cout << "No" << '\n';
  }
}