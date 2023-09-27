#include <iostream>
#include <utility>

int gcd(const int a, const int b){
  if(a % b == 0) return b;
  else return gcd(b, a%b);
}


int main() {
  int a, b;
  std::cin >> a >> b;
  if (a < b) std::swap(a, b);
  std::cout << gcd(a, b) << std::endl;
  return 0;

}