#include <iostream>

int partition(int arr[], int begin_i, int end_i)
{
  int x = arr[end_i];
  int i = begin_i;

  for (int j = begin_i; j < end_i; ++j)
  {
    if (arr[j] <= x)
    {
      std::swap(arr[i], arr[j]);
      ++i;
    }
  }

  std::swap(arr[i], arr[end_i]);

  return i;
}

int main()
{
  int n;
  std::cin >> n;

  int seq[100000];
  for (int i = 0; i < n; ++i)
  {
    std::cin >> seq[i];
  }

  int criterion = partition(seq, 0, n - 1);

  for (int i = 0; i < n; ++i)
  {
    if (i < criterion)
    {
      std::cout << seq[i] << ' ';
    }
    else if (i > criterion)
    {
      std::cout << ' ' << seq[i];
    }
    else
    {
      std::cout << '[' << seq[i] << ']';
    }
  }
  std::cout << std::endl;

  return 0;
}

