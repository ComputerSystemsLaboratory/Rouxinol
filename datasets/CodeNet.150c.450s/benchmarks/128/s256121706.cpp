#include <iostream>
#include <algorithm>
#include <string>

int main(void)
{
  std::string str;
  std::cin >> str;
  
  std::string rev;
  for (int i = str.size() - 1; i >= 0; i--) {
    rev.push_back(str[i]);
  }
  
  std::cout << rev << std::endl;
  
  return 0;
}