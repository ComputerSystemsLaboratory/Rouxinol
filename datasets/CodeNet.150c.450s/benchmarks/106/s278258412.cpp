#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int a, b, c;
  int ans = 0;
  fscanf(stdin, "%d %d %d", &a, &b, &c);
  for (int i = a; i <= b; ++i) {
    if (c % i == 0) { ++ans; }
  }
  fprintf(stdout, "%d", ans);
  fprintf(stdout, "\n");
  return 0;
}