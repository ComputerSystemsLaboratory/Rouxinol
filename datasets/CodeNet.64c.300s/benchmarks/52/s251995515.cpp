#include <cstdio>
#include <iostream>
using namespace std;

int dfs(int depth, int cur, int accm, int n, int s)
{
  if (depth > n)
    return 0;

  if (depth == n && accm == s)
    return 1;

  if (accm > s)
    return 0;
  else {
    int count = 0;
    for (int i = cur + 1; i < 10; i++) {
      count += dfs(depth+1, i, accm+i, n, s);
    }
    return count;
  }
}


int main(int argc, char **argv)
{
  int n, s;
  for (;;) {
    cin >> n >> s;
    if (n==0 && s==0)
      break;

    int total = 0;
    for (int i = 0; i < 10; i++) {
      total += dfs(1, i, i, n, s);
    }

    cout << total << endl;
  }
  return 0;
}