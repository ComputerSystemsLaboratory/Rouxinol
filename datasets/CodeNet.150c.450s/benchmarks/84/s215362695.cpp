#include <iostream>

const int MAX_NUM = 1000000000 + 1;

long long merge(int arr[], const int begin, const int mid, const int end)
{
  int arr_left[mid - begin + 1];
  for (int i = 0; i < mid - begin; ++i)
  {
    arr_left[i] = arr[begin + i];
  }
  arr_left[mid - begin] = MAX_NUM;

  int arr_right[end - mid + 1];
  for (int i = 0; i < end - mid; ++i)
  {
    arr_right[i] = arr[mid + i];
  }
  arr_right[end - mid] = MAX_NUM;

  int i_l = 0;
  int i_r = 0;
  long long count = 0;
  for (int i = begin; i < end; ++i)
  {
    if (arr_left[i_l] <= arr_right[i_r])
    {
      arr[i] = arr_left[i_l];
      ++i_l;
    }
    else
    {
      arr[i] = arr_right[i_r];
      ++i_r;
      count += ((mid - begin) - i_l); // Count up the gap
    }
  }

  return count;
}

long long merge_sort(int arr[], const int begin, const int end)
{
  long long count = 0;

  if (begin < end - 1)
  {
    int mid = (begin + end) / 2;
    count += merge_sort(arr, begin, mid);
    count += merge_sort(arr, mid, end);
    count += merge(arr, begin, mid, end);
  }

  return count;
}

int main()
{
  int n;
  std::cin >> n;

  int arr[n];
  for (int i = 0; i < n; ++i)
  {
    std::cin >> arr[i];
  }

  std::cout << merge_sort(arr, 0, n) << std::endl;

  return 0;
}

