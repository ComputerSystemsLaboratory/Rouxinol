#include <iostream>

int main(void) {
  std::string x;

  std::cin >> x;
  
  while(x != "0") {
    int sum = 0;
    
    for (int i = 0; i < x.size(); i++) {
      sum += x[i] - '0';
    }

    std::cout << sum << std::endl;

    std::cin >> x;
  }

  return 0;
}