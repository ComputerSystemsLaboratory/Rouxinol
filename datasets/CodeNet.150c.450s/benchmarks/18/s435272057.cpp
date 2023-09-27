#include <iostream>


int main () { 
  int n, mod;
  int yen = 100000;
  std::cin >> n;
  for (int i = 0; i < n; i ++) {
    yen *= 1.05;
    mod = yen % 1000;
    if (mod > 0)
      yen += 1000 - mod;
  }
  std::cout << yen << std::endl;
  return 0;
}