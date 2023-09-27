#include <stdio.h>
#include <algorithm>

using namespace std;

int nums[100];
int main() {
  int w, n;
  scanf("%d %d", &w, &n);
  for (int i = 1; i <= w; i++) {
    nums[i] = i;
  }
  while (n--) {
    int a,b;
    scanf("%d,%d", &a, &b);
    swap(nums[a], nums[b]);
  }
  for (int i = 1; i <= w; i++) {
    printf("%d\n", nums[i]);
  }
}