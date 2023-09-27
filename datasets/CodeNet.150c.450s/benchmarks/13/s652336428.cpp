#include <iostream>
#include <string>
#include <string.h>

int main(int argc, char const *argv[]) {
  std::string s,r;
  std::getline(std::cin, s);
  std::getline(std::cin, r);
  s = s + s;
  std::size_t found;
  found = s.find(r);
  if(found != std::string::npos){
    std::cout << "Yes" << std::endl;
  }else std::cout << "No" << std::endl;
  return 0;
}