#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(void)
{
  int val1, val2;

  while (std::cin >> val1 >> val2) {

    int sum = val1 + val2;

    int numDigit = 0;
    while (sum > 0) {
      sum /= 10;
      numDigit++;
    }

    std::cout << numDigit << std::endl;
  }

  return 0;
}