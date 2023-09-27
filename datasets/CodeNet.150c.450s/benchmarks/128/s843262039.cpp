#include <iostream>
#include <string>
#include <algorithm>
int main()
{
  std::string s;
  while (std::cin >> s) {
    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;
  }
  return 0;
}