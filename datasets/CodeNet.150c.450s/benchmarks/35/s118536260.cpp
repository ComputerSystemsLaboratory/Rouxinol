#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
  int n, a;
  while (1) {
    scanf("%d", &n);
    if (n == 0) break;
    scanf("%d", &a);
    int sum = a;
    int max_sum = a;
    for (int i = 1; i < n; ++i) {
      scanf("%d", &a);
      sum = max(sum + a, a);
      max_sum = max(max_sum , sum);
    }
    printf("%d\n", max_sum);
  }
}
