#include <iostream>
int gcd(int a, int b)
{
  while (1) {
    if (b == 0) {
      return a;
    }
    int temp = b;
    b = a % b;
    a = temp;
  }
}

int lcd(int a, int b)
{
  return a / gcd(a, b) * b;
}

int main()
{
  int a, b;
  while (std::cin >> a >> b) {
    std::cout << gcd(a, b) << " " << lcd(a, b) << std::endl;
  }
  return 0;
}