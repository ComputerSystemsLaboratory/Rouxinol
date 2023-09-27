#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n;
  std::cin >> n;
  if (n == 0)
    return -1;

  long price, min_price;
  long max_diff = 1 - 10e+9;
  std::cin >> min_price;
  while(std::cin >> price){
    max_diff = std::max(max_diff, price - min_price);
    min_price = std::min(min_price, price);
  }

  std::cout << max_diff << std::endl;
}