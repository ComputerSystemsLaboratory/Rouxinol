#include <iostream>

int main(void)
{
  int n = 0;
  std::cin >> n;
  
  long long int fact = 1;
  
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  
  std::cout << fact << std::endl;
  
  return 0;
}