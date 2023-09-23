#include <iostream>


int count_divisors(int a, int b, int c) {
  // output the number of divisors of `c' between `a' and `b'.
  int count = 0;

  for (int i = a; i <= b; i ++) {
    if (c % i == 0) {
      count += 1;
    }
  }

  return count;
}

int main() {

  int a, b, c;

  std::cin >> a >> b >> c;

  std::cout << count_divisors(a, b, c) << std::endl;

  return 0;
}
