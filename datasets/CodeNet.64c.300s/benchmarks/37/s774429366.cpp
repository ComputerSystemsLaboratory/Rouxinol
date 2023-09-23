#include <cstdio>
using namespace std;

int n;

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    int l = 1;
    int r = 1;
    int sum = 0;
    int cnt = 0;
    while (l < n) {
      while (sum < n && r < n) {
        sum += r++;
      }

      if (sum == n) cnt++;
      do {
        sum -= l++;
        if (sum == n) cnt++;
      } while (sum >= n);
    }

    printf("%d\n", cnt);
  }
}