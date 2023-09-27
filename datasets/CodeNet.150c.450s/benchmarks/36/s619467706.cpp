#include <iostream>
#include <string>

int func(int x)
{
  return x * x;
}

int main(void)
{
  const int max_x = 600;
  int d = 0;

  while (std::cin >> d) {
    int loop = max_x / d;

    int sum = 0;
    for (int i = 0; i < loop; i++) {
      sum += d * func(d * i);
    }

    std::cout << sum << std::endl;
  }

  return 0;
}