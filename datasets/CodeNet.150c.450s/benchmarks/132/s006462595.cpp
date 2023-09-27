#include <cstdio>
using namespace std;

int n;
int p;

int main() {
  while (1) {
    int nums[50] = {0};

    scanf("%d%d", &n, &p);
    if (n == 0 && p == 0) return 0;

    int defp = p;
    int idx = 0;
    while (1) {
      if (p > 0) {
        nums[idx]++;
        p--;
        if (nums[idx] == defp) break;
      } else {
        p = nums[idx];
        nums[idx] = 0;
      }

      idx = (idx+1)%n;
    }

    printf("%d\n", idx);
  }
}