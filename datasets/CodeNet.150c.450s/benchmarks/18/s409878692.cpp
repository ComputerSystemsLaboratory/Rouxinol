#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int debt = 100000;
  for (int i = 0; i < n; ++i) {
  	debt = int(double(debt) * 1.05);
    if (debt % 1000 != 0) {
    	debt = ((debt / 1000) + 1) * 1000;
    }
  }

  std::cout << debt << std::endl;

  return 0;
}