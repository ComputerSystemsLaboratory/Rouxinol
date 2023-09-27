#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  for (int i = 1; i <= n; ++i) {
    if (i % 3 == 0) {
      fprintf(stdout, " %d", i);
    }
    else {
      for (int x = i; x > 0; x /= 10) {
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