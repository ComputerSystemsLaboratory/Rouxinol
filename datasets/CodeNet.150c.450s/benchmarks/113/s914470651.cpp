#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int num = 1, val = -1;
  while (true) {
    fscanf(stdin, "%d", &val);
    if (val == 0) { break; }
    fprintf(stdout, "Case %d: %d\n", num, val);
    ++num;
  }
  return 0;
}