#include <cstdio>
#include <algorithm>
using namespace std;

int n;

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    int sum = 0;
    int max_s = -1;
    int min_s = 1001;
    for (int i=0; i<n; i++) {
      int s;
      scanf("%d", &s);
      sum += s;
      max_s = max(max_s, s);
      min_s = min(min_s, s);
    }

    printf("%d\n", (sum-max_s-min_s)/(n-2));
  }
}