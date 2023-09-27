#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int a = 0, b = 0;
  fscanf(stdin, "%d %d", &a, &b);
  if (a < b) {
    printf("a < b");
  }
  else if (a > b) {
    printf("a > b");
  }
  else {
    printf("a == b");
  }
  fprintf(stdout, "\n");
  return 0;
}