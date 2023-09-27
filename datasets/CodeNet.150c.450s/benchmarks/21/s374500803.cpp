#include<iostream>

int main(int argc, char const *argv[]) {
  int x;
  std::cin >> x;
  if(x >= 1 && x <= 100){
    x = x * x * x;
    std::cout << x << "\n";
  }
  return 0;
}