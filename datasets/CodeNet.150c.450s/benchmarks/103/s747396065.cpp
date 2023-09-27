#include <cstdio>

using namespace std;

int count(int n, int s, int begin) {
  if (n == 1) { return begin <= s && s <= 9 ? 1 : 0; }
  int acc = 0;
  for (int i = begin; i < s - i; ++i) {
    acc += count(n - 1, s - i, i + 1);
  }
  return acc;
}

int main() {
  while (true) {
    int n, s;
    scanf("%d %d", &n, &s);
    if (n == 0 && s == 0) { break; }
    printf("%d\n", count(n, s, 0));
  }

  return 0;
}