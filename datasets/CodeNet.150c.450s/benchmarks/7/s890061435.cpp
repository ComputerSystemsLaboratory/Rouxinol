#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
  std::vector<int> hills(10);
  for (int i = 0; i < 10; i++) {
    int temp;
    scanf("%d", &temp);
    hills[i] = temp;
  }
  std::sort(hills.begin(), hills.end());
  std::reverse(hills.begin(), hills.end());
  for (int i = 0; i < 3; i++) {
    printf("%d\n", hills[i]);
  }
  return 0;
}

