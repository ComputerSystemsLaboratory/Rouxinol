#include <algorithm>
#include <iostream>
#include <typeinfo>

int main() {
  int total_time;
  std::cin >> total_time;

  int min_price;
  std::cin >> min_price;
  int max_profit = std::numeric_limits<int>::min();
  for (auto t = 1; t < total_time; t++) {
    int price;
    std::cin >> price;
    max_profit = std::max(max_profit, price - min_price);
    min_price = std::min(min_price, price);
  }
  std::cout << max_profit << '\n';
  return 0;
}