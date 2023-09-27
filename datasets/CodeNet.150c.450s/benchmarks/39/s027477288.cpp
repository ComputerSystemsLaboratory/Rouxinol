#include<iostream>

int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a;
  std::cin >> b;
  if(a >= 1 && b <= 100){
    int square = a * b;
    int length = 2 * (a + b);
    std::cout << square << " " << length << "\n";
  }

  return 0;
}