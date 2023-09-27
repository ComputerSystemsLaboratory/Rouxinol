#include <iostream>

#define MAX(a, b) (a >= b ? a : b)
#define MIN(a, b) (a >= b ? b : a)

int main(void)
{
  int n;
  int maxv = -1e9;
  int minv;

  std::cin >> n;
  std::cin >> minv;
  n--;

  while (n--){
    int temp;
    std::cin >> temp;
    maxv = MAX(maxv, temp - minv);
    minv = MIN(minv, temp);
  }
  std::cout << maxv << std::endl;
  return (0);
}