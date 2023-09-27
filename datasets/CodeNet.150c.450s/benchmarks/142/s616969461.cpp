#include <iostream>

int main()
{
  int n,k;
  int a[200000];
  std::cin >> n >> k;
  for (int i=0; i<n; ++i)
  {
    std::cin >> a[i];
  }
  for (int i=0; i<n-k; ++i)
  {
    if (a[i] < a[i+k])
    {
      std::cout << "Yes" << std::endl;
    }
    else
    {
      std::cout << "No" << std::endl;
    }
  }
  return 0;
}
