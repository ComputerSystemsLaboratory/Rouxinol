#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
int selection_sort(std::vector<T>& xs)
{
  int changed {0};
  for (int i{0}; i < xs.size(); ++i)
  {
    int mini{i};
    for (int j{i}; j < xs.size(); ++j)
    {
      if (xs[mini] > xs[j])
      {
        mini = j;
      }
    }
    if (i != mini)
    {
      std::swap(xs[i], xs[mini]);
      ++changed;
    }

  }
  return changed;
}

int main()
{
  int n{};
  std::vector<int> xs{};
  std::cin >> n;
  xs.resize(n);
  for (int i{0}; i < n; ++i)
  {
    std::cin >> xs[i];
  }

  int changed{selection_sort(xs)};
  for (int i{0}; i < n-1; ++i)
  {
    std::cout << xs[i] << ' ';
  }
  std::cout << xs[n-1] << std::endl
    << changed << std::endl;
  return 0;
}