#include <iostream>
#include <vector>

int main () {
  std::vector<int> divisors;
  int a, b, c;
  std::cin >> a >> b >> c;
  for(a; a <= b; ++a) {
    if(c % a == 0)
      divisors.push_back(a);
  }
  std::cout << divisors.size() << std::endl;
  return 0;
}