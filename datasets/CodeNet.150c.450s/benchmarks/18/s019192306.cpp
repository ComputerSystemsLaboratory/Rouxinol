#include <cstdio>

#define PRINCIPAL 100000
#define RATE 1.05
#define ROUND_UNIT 1000

int main(void)
{
  int n;
  unsigned long debt = PRINCIPAL;

  std::scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    debt = debt * RATE;
    debt = (debt + (ROUND_UNIT - 1)) / ROUND_UNIT * ROUND_UNIT;
  }

  std::printf("%lu\n", debt);
  
  return 0;
}

