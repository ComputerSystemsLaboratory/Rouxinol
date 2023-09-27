#include <iostream>
#include <algorithm>

int getGCD(int a, int b)
{
  /* a??¨b????????§??¬?´???°???????????? */
  int larger = a;
  int smaller = b;
  
  if (larger < smaller) {
    std::swap(larger, smaller);
  }
  
  int sub = larger - smaller;
  
  int ret = larger;
  while (sub > 0) {
    ret = sub;
    larger = sub;
    if (larger < smaller) {
      std::swap(larger, smaller);
    }
    sub = larger - smaller;
  }
  
  return ret;
}

int getLCM(int a, int b)
{
  /* a??¨b???????°???¬?????°???????????? */
  return a / getGCD(a, b) * b;
}

int main(void)
{
  int a, b;
  
  while (std::cin >> a >> b) {
    std::cout << getGCD(a, b) << " " << getLCM(a, b) << std::endl;
  }
  
  return 0;
}