#include <cstdio>

using namespace std;

int solve(int n, int s) {
  int ret = 0;
  for (int mask = 0; mask < 1<<10; mask++) {
    if (__builtin_popcountll(mask) == n) {
      int sum = 0;
      for (int i = 0; i < 10; i++) {
        if (mask & 1 << i)
          sum += i;
      }
      if (sum == s)
        ++ret;
    }
  }
  return ret;
}

int main(int argc, char *argv[])
{
  int n, s;
  while (~scanf(" %d %d", &n, &s)) {
    if (n == 0 && s == 0)
      break;
    int ret = solve(n, s);
    printf("%d\n", ret);
  }
  
  return 0;
}