#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  unsigned long p = 1;
  for (; n > 1; p *= n--) {}

  printf("%ld\n", p);
  return 0;
}