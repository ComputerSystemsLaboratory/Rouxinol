#include <cstdio>

using namespace std;

int rec(int x, int acc, int n, int s) {
  if (x == 10) {
    return n == 0 && acc == s;
  }

  int ret = 0;
  ret += rec(x+1, acc, n, s);
  if (n > 0)
    ret += rec(x+1, acc+x, n-1, s);
  
  return ret;
}

int solve(int n, int s) {
  return rec(0, 0, n, s);
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