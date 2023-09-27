#include <stdio.h>
#include <algorithm>

int data[3];

int main() {
  scanf("%d%d%d", &data[0], &data[1], &data[2]);
  std::sort(data, data+3);
  printf("%d %d %d\n", data[0], data[1], data[2]);
  return 0;
}