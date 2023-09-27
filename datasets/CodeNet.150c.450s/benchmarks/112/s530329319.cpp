#include <iostream>
#include <map>

int main(int argc, char** argv){
  int n;
  while(std::cin >> n, n){
    std::map<char, char> trans;
    for(; n > 0; --n){
      char before, after;
      std::cin >> before >> after;
      trans[before] = after;
    }
    std::cin >> n;
    for(; n > 0; --n){
      char c;
      std::cin >> c;
      if(trans.count(c) == 1) c = trans[c];
      std::cout << c;
    }
    std::cout << std::endl;
  }
}