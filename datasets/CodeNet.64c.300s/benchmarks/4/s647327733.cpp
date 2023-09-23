#include <iostream>

int main()
{
  int a = 0, b = 0, c = 0;
  std::cin >> a >> b >> c;
  
  const bool eval = (a < b) && (b < c);

  std::cout << (eval ? "Yes" : "No") << std::endl;

  return 0;
}