#include <iostream>

int main(int argc, char const *argv[]) {
  int a=0,b=0,c=0;
  std::cin >> a >> b >> c;

  if(a < b && b < c){
    std::cout << "Yes" << std::endl;
  }else std::cout << "No" << std::endl;
  return 0;
}