#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int i = 0, n = 0;
  fscanf(stdin, "%d", &n);
  while (++i <= n) {
    int x = i;
    if (x % 3 == 0 || x % 10 == 3) {
      fprintf(stdout, " %d", i);
    }
    else {
      for (x /= 10; x > 0; x /= 10) {
        if (x % 10 == 3) {
          fprintf(stdout, " %d", i);
          break;
        }
      }
    }
  }
  fprintf(stdout, "\n");
  return 0;
}