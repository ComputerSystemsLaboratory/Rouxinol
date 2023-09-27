#include <iostream>

int main(){
  int a;
  int b;
  std::cin >> a;
  std::cin >> b;
  if(a > b){
    std::cout << "a > b" << std::endl;
  } else if(a < b) {
    std::cout << "a < b" << std::endl;
  } else {
    std::cout << "a == b" << std::endl;
  }
  return 0;
}
