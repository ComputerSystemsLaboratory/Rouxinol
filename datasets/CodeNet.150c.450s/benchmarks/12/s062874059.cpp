#include <iostream>
#include <array>

int main ()
{
  std::array<int, 250> heap;
  int n;
  std::cin >> n;

  for (int i=0; i<n; ++i)
    {
      std::cin >> heap[i];
    }

  for (int i=0; i<n; ++i)
    {
      std::cout << "node " << i+1;
      std::cout << ": key = " << heap[i] << ", ";
      auto parent = (i+1)/2;
      if (parent > 0)
        std::cout << "parent key = " << heap[parent-1] << ", ";
      auto left = 2*(i+1);
      if (left <= n)
        std::cout << "left key = " << heap[left-1] << ", ";
      auto right = left + 1;
      if (right <= n)
        std::cout << "right key = " << heap[right-1] << ", ";
      std::cout << std::endl;
    }
}

