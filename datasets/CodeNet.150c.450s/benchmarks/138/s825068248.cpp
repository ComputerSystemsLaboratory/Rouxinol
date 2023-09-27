#include <iostream>

int GCD(int a, int b){
  if (b == 0) return a;
  return GCD(b, a % b);
}

int main(){
  int a, b;
  std::cin >> a >> b;
  std::cout << GCD(a, b) << std::endl;
}