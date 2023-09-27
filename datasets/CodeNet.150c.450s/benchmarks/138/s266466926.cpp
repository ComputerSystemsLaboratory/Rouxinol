#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int a, b;
  fscanf(stdin, "%d %d", &a, &b);
  while (b) {
    int c = a % b;
    a = b;
    b = c;
  }
  fprintf(stdout, "%d\n", a);
  return 0;
}