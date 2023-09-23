#include <iostream>

int main(){
  int money = 100000;
  int n;

  std::cin >> n;

  for(int i = 0; i < n; i++){
    money *= 1.05;
    if(money % 1000 != 0)
      money += 1000 - money % 1000;
  }

  std::cout << money << std::endl;

}