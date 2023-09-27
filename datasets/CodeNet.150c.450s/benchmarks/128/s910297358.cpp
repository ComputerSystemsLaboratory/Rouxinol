#include <iostream>
#include <algorithm>
#include <string>

#define SIZE 21

int main(void)
{
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  char input[SIZE];
  std::cin.getline(input, sizeof(input));
  std::string str = std::string(input);

  std::reverse(str.begin(), str.end());

  std::cout << str << std::endl;

  return 0;
}

