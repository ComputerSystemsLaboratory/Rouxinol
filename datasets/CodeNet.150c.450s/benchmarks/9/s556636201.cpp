#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {

  while(1){
    std::string str;
    int x;
    std::cin >> str;
    if(str == "-")break;
    std::cin >> x;
    for(int i=0;i<x;i++){
      int shuffle;
      std::cin >> shuffle;
      std::string s = str.substr(shuffle,str.size());
      std::string temp = str.substr(0,shuffle);
      str = s + temp;
    }
    std::cout << str << std::endl;
  }

  return 0;
}