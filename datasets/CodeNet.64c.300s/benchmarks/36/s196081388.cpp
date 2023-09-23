#include<cstdio>
#include<algorithm>

int main() {
  int arr[3];
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
  std::sort(arr, arr+3);
  printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}