#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n, m;
  fscanf(stdin, "%d %d", &n, &m);
  vector<vector<ll> > a(n, vector<ll>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      fscanf(stdin, "%lld", &a[i][j]);
    }
  }
  vector<ll> b(m);
  for (int i = 0; i < m; ++i) {
    fscanf(stdin, "%lld", &b[i]);
  }
  vector<ll> c(n, 0);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      c[i] += a[i][j] * b[j];
    }
  }

  for (int i = 0; i < n; ++i) {
    fprintf(stdout, "%lld\n", c[i]);
  }
  return 0;
}