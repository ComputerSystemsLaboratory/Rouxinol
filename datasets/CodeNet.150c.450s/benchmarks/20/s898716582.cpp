#include <iostream>

int main(){
  int S, s, m, h;
  std::cin >> S;
  h = S / 3600;
  m = ( S % 3600) / 60;
  s = ( S % 3600) % 60;

  std::cout << h << ":" <<  m << ":" << s << std::endl;
}

