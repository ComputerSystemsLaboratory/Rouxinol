#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  int turn;
  int hanako_p=0,taro_p=0;
  std::cin >> turn;
  for(int i=0;i<turn;i++){
    std::string t,h;
    std::cin >> t >> h;
    if(t < h){
      hanako_p+=3;
    }else if(h < t){
      taro_p+=3;
    }else if(h == t){
      hanako_p++;
      taro_p++;
    }
  }
  std::cout << taro_p << " " << hanako_p << std::endl;
  return 0;
}