#include <iostream>
unsigned long long int factorial(int i)
{
  if (i <= 1) return 1;
  else        return i * factorial(i - 1);
}
int main()
{
  int n;
  std::cin >> n;
  std::cout << factorial(n) << std::endl;
  return 0;
}