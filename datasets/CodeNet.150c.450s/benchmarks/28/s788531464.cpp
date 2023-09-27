#include <cstdio>

int n;
int k;
int w[100000];

bool check(int x) {
  int c = 1;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (w[i] > x)
      return false;
    if (sum + w[i] > x) {
      ++c;
      sum = 0;
    }
    sum += w[i];
  }
  return c <= k;
}

int solve() {
  int lo = -1;
  int hi = 1010101010;
  while (hi - lo > 1) {
    int mi = (lo + hi) / 2;
    if (check(mi))
      hi = mi;
    else
      lo = mi;
  }
  return hi;
}

int main(int argc, char *argv[])
{
  scanf(" %d %d", &n, &k);
  for (int i = 0; i < n; i++)
    scanf(" %d", w+i);
  printf("%d\n", solve());
  return 0;
}