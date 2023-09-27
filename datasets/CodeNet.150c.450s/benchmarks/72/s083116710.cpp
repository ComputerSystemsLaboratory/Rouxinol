#include <iostream>
#include <cctype>

int main(void) {
  std::string s;

  std::getline(std::cin, s);

  for (int i =  0; i < s.size(); i++) {
    if (!std::isalpha(s[i])) {
      continue;
    }
    
    if (isupper(s[i])) {
      s[i] = std::tolower(s[i]);
    } else {
      s[i] = std::toupper(s[i]);
    }
  }

  std::cout << s << std::endl;
  
  return 0;
}