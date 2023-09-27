#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

int main() {
  std::string str;

  while(std::cin >> str) {
    if(str == "0") break;
    int sum = 0;
    for(int i = 0; str[i] != '\0'; ++i) {
      sum += str[i] - '0';
    }
    std::cout << sum << std::endl;
  }

  return 0;
}