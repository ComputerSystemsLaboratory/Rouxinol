#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int x, y;
  while (true) {
    fscanf(stdin, "%d %d", &x, &y);
    if (x == 0 && y == 0) { break; }
    if (x > y) { swap(x, y); }
    fprintf(stdout, "%d %d\n", x, y);
  }
  return 0;
}