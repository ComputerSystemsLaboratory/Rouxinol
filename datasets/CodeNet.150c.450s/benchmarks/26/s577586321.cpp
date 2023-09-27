#include <iostream>
int main()
{
  int a, b;
  std::cin >> a >> b;
  if(a < b) std::cout << "a < b\n";
  if(a > b) std::cout << "a > b\n";
  if(a == b) std::cout << "a == b\n";
  return (0);
}