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
    fscanf(stdin, "%d", &v[i]);
  }
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    int ix = i;
    for (int j = i; j < n; ++j) {
      if (v[j] < v[ix]) {
        ix = j;
      }
    }
    if (i != ix) { ++cnt; }
    swap(v[i], v[ix]);
  }
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    fprintf(stdout, "%d", v[i]);
  }
  fprintf(stdout, "\n%d\n", cnt);
  return 0;
}