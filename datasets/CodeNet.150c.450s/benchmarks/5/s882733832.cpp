#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &v[n - 1 - i]);
  }
  for (int i = 0; i < n; ++i) {
    fprintf(stdout, "%d", v[i]);
    if (i != n - 1) { fprintf(stdout, " "); }
  }
  fprintf(stdout, "\n");
  return 0;
}