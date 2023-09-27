#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n, m, l;
  fscanf(stdin, "%d %d %d", &n, &m, &l);
  vector<vector<ll> > mat1(n, vector<ll>(m)), mat2(m, vector<ll>(l));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      fscanf(stdin, "%lld", &mat1[i][j]);
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < l; ++j) {
      fscanf(stdin, "%lld", &mat2[i][j]);
    }
  }
  vector<vector<ll> > mat3(n, vector<ll>(l));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      for (int k = 0; k < m; ++k) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      if (j) { fprintf(stdout, " "); }
      fprintf(stdout, "%lld", mat3[i][j]);
    }
    fprintf(stdout, "\n");
  }
  return 0;
}