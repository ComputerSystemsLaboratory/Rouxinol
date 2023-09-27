#include <bits/stdc++.h>

int main() {

  std::string str;
  std::string s;
  bool b;

  std::cin >> str >> s;
  for(int i = 0; i < str.size(); ++i) {
    b = true;
    for(int j = i; j < i+s.size(); ++j) {
      if( str[j%str.size()] != s[j-i] ) {
	b = false;
	break;
      }
    }
    if( b ) {
      std::cout << "Yes" << std::endl;
      return 0;
    }
  }
  std::cout << "No" << std::endl;
  
  return 0;
}