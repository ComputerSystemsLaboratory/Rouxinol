#include <iostream>
#include <cstdio>

using namespace std;

int N, S;

int f(int tar, int n, int m)
{
  if (tar < 0) {
    return 0;
  }
  if (n == 0) {
    if (tar == 0) {
      return 1;
    } else {
      return 0;
    }
  }
  if (tar < m) {
    return 0;
  }

  int s = 0;
  for (int i = m + 1; i <= 9; i++) {
    s += f(tar - i, n - 1, i);
  }
  return s;
}
  
void solve()
{
  printf("%d\n", f(S, N, -1));
}

int main()
{
  for (;;) {
    scanf("%d %d ", &N, &S);
    if (N == 0 && S == 0) {
      break;
    }
    solve();
  }
}