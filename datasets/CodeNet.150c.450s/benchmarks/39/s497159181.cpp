#include <iostream>
#include <stdlib.h>

int main(){
  int x, y;
  std::cin >> x;
  std::cin >> y;
  
  int s = x * y;
  int l = 2 * x + 2 * y;
  std::cout << s << " " << l << std::endl;
  
  return 0;
}