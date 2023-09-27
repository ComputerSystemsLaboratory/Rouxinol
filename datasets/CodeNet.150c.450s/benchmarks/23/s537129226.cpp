#include <cstdint>

using namespace std;

#define MEMO_SIZE 44
int64_t memo[MEMO_SIZE];

void fib_init()
{
  for (uint32_t i = 0; i < MEMO_SIZE; i++) {
    memo[i] = -1;
  }
}

uint32_t fib(uint32_t i)
{
  if (i == 0) {
    return memo[0] = 1;
  } else if (i == 1) {
    return memo[1] = 1;
  } else {
    int64_t val1 = memo[i - 1], val2 = memo[i - 2];
    if (val1 == -1) {
      val1 = memo[i - 1] = fib(i - 1);
    }

    if (val2 == -1) {
      val2 = memo[i - 2] = fib(i - 2);
    }

    return val1 + val2;
  }
}

#include <iostream>

int32_t main()
{
  fib_init();
  uint32_t i;
  cin >> i;
  cout << fib(i) << endl;
  return 0;
}