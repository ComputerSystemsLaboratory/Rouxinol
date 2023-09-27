#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int a = 0, b = 0, c = 0;
  fscanf(stdin, "%d %d %d", &a, &b, &c);
  if (a < b && b < c) {
    printf("Yes");
  }
  else {
    printf("No");
  }
  fprintf(stdout, "\n");
  return 0;
}