#include <iostream>

int main()
{
  uint size;
  std::cin >> size;
  int a[size];
  for (int i = 0; i < size; i++) {
    std::cin >> a[i];
  }
  for (int i = size - 1; i >= 0; i--) {
    std::cout << a[i] << (i == 0 ? "\n" : " ");
  }
}

