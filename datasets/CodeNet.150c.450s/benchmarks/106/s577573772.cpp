#include <cstdio>

int
main(void)
{
  int a, b, c, i, cnt;

  std::scanf("%d %d %d", &a, &b, &c);

  cnt = 0;
  for (i = a; i <= b; i++) {
    if (c % i == 0) {
      cnt++;
    }
  }

  std::printf("%d\n", cnt);

  return 0;
}

