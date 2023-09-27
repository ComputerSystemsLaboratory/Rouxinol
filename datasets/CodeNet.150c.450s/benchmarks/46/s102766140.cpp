#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  while (true) {
    int n, x;
    fscanf(stdin, "%d %d", &n, &x);
    if (n == 0 && x == 0) { break; }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = i + 1; j <= n; ++j) {
        int k = x - i - j;
        if (k > i && k > j && k <= n) {
          ++cnt;
        }
      }
    }
    fprintf(stdout, "%d\n", cnt);
  }
  return 0;
}