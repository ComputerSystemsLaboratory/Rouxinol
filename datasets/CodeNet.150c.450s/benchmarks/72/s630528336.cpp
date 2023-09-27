#include <bits/stdc++.h>

int main() {

  std::string str;

  std::getline(std::cin, str);
  for(int i = 0; i < str.size(); ++i) {
    if( ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') ) { 
      str[i] = str[i] ^ 0x20;
    }
  }
  std::cout << str << std::endl;
  
  
  return 0;
}