#include <iostream>
#include <string>

int main(){
  std::string str;
  int num;
  
  std::cin >> str;
  num = str.length();
  
  for(int i=num-1; i>=0; i--){
    std::cout << str[i];
  }
  std::cout << std::endl;

  return 0;
}