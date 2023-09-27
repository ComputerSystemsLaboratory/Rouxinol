#include <bits/stdc++.h>

int main() {

  std::string str;
  int temp;

  for(;;) {
    std::cin >> str;
    if( str == "0" ) {
      break;
    }

    temp = 0;
    for(int i = 0; i < str.size(); ++i) {
      temp += str[i] - '0';
    }
    std::cout << temp << std::endl;
  }
  
  return 0;
}