#include <bits/stdc++.h>

int main() {

  std::string str;
  int n;
  int sum;
  int temp;
  

  for(;;) {
    std::cin >> str;
    if( str == "-" ) break;
    std::cin >> n;
    sum = 0;
    for(int i = 0; i < n; ++i) {
      std::cin >> temp;
      sum += temp;
    }
    for(int i = 0; i < str.size(); ++i) {
      std::cout << str[(i+sum)%str.size()];
    }
    std::cout << std::endl;
  }

  
  return 0;
}