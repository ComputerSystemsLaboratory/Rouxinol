#include <iostream>

void counting_sort(const int arr_in[], int arr_out[], const int n, const int max)
{
  int counter[max + 1];
  for (int i = 0; i < max + 1; ++i)
  {
    counter[i] = 0;
  }

  for (int i = 0; i < n; ++i)
  {
    ++counter[arr_in[i]];
  }

  for (int i = 0; i < max; ++i)
  {
    counter[i + 1] += counter[i];
  }

  for (int i = n - 1; i >= 0; --i)
  {
    arr_out[counter[arr_in[i]] - 1] = arr_in[i];
    --counter[arr_in[i]];
  }
}

int main()
{
  int n;
  std::cin >> n;

  int arr_in[n], arr_out[n];
  for (int i = 0; i < n; ++i)
  {
    std::cin >> arr_in[i];
  }

  counting_sort(arr_in, arr_out, n, 10000);

  for (int i = 0; i < n; ++i)
  {
    if (i != 0)
    {
      std::cout << ' ';
    }
    std::cout << arr_out[i];
  }
  std::cout << std::endl;

  return 0;
}

