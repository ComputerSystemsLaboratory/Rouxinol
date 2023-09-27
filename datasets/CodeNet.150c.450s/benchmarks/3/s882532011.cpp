#include <iostream>
#include <sstream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::string str;
  std::cin >> str;
  int x;
  std::cin >> x;
  for(int i=0;i<x;i++){
    std::string order;
    std::cin >> order;
    if(order == "replace"){
      int a,b;
      std::string s;
      std::cin >> a >> b >> s;
      str.replace(a,b-a+1,s);
    }else if(order == "reverse"){
      int a,b;
      std::cin >> a >> b;
      reverse(str.begin() + a, str.begin() + b + 1);
    }else if(order == "print"){
      int a,b;
      std::cin >> a >> b;
      std::string print;
      print = str.substr(a,b-a+1);
      std::cout << print << std::endl;
    }
  }
  return 0;
}