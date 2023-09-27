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
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j > i; --j) {
      if (v[j] < v[j - 1]) {
        swap(v[j], v[j - 1]);
        ++ans;
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    fprintf(stdout, "%d", v[i]);
  }
  fprintf(stdout, "\n%d\n", ans);
  return 0;
}