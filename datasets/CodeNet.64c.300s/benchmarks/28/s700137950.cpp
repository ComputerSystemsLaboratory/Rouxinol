#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int w, h, x, y, r;
  fscanf(stdin, "%d %d %d %d %d", &w, &h, &x, &y, &r);

  int left = x - r, right = x + r;
  int top = y + r, bottom = y - r;
  if (0 <= left && right <= w && 0 <= bottom && top <= h) {
    fprintf(stdout, "Yes");
  }
  else {
    fprintf(stdout, "No");
  }
  fprintf(stdout, "\n");
  return 0;
}