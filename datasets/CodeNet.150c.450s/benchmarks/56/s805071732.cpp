#include <iostream>
int main(void)
{
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  int min = 1000001, max = -1000001;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (min > a[i]) min = a[i];
    if (max < a[i]) max = a[i];
  }
  std::cout << min << " " << max << " " << sum << std::endl;
}