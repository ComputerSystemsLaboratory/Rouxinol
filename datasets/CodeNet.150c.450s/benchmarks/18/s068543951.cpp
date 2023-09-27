#include <iostream>

int main() {
  int debt = 100000;
  int weeks; std::cin >> weeks;
  for(int i=0; i<weeks; i++) {
    debt = debt*1.05;  
    debt = (debt+999)/1000*1000;
  }  
  std::cout << debt << std::endl; 
}