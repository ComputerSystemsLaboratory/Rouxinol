#include <iostream>
int main(void)
{
  int a, b;
  std::cin >> a >> b;
  std::cout << ((a < b) ? "a < b" : (a > b) ? "a > b" : "a == b") << std::endl;
}