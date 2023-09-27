#include <iostream>
int main(void)
{
  int h, m, s;
  std::cin >> s;
  h = s / 3600;
  m = s / 60 % 60;
  s -= h * 3600 + m * 60;
  std::cout << h << ":" << m << ":" << s << std::endl;
}