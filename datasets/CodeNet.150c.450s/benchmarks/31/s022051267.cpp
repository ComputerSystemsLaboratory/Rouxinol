#include <iostream>
#include <climits>

int main(int argc, char *argv[])
{
  int n;
  std::cin >> n;
  int r[n];
  for (int t = 0; t <= n - 1; t++)
  {
    std::cin >> r[t];
  }
  int max;
  int min;
  max = INT_MIN;
  min = r[0];
  for (int j = 1; j <= n - 1; j++)
  {
    max = std::max(max, r[j] - min);
    min = std::min(min, r[j]);
  }
  std::cout << max << std::endl;

  return 0;
}
