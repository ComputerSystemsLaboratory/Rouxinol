#include <cstdio>

const int MAX = 45;

int fib_num[MAX];

int fib(int n)
{
  if (fib_num[n] != 1)
    return fib_num[n];

  if (n == 0 || n == 1)
    return 1;
  else
    return fib_num[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
  for (int i = 0; i < MAX; ++i)
    fib_num[i] = 1;

  int n;
  scanf("%d", &n);
  printf("%d\n", fib(n));

  return 0;
}
