#include <iostream>

int main() {
  while (true) {
    int n, score_a = 0, score_b = 0;
    std::cin >> n;
    if (n == 0) break;
    
    for (int i = 0; i < n; i++) {
      int a, b;
      std::cin >> a >> b;
      if      (a > b) {score_a += a+b;}
      else if (a < b) {score_b += a+b;}
      else            {score_a += a; score_b += b;}
    }
    
    std::cout << score_a << " " << score_b << std::endl;
  }
  
  return 0;
}