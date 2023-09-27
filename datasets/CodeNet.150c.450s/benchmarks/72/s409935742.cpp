#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char const *argv[]) {
  std::string s;
  std::getline(std::cin, s);
  std::string::const_iterator it = s.begin();
  while(it != s.end()){
    char c;
    c = *it;
    if(c == '\n')break;
    if(std::islower(c)){
      c = (char)std::toupper(c);
    }else if(std::isupper(c)){
      c = (char)std::tolower(c);
    }
      std::cout << c;
      it++;
  }
  std::cout << std::endl;
  return 0;
}