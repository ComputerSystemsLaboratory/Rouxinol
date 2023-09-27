#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<vector<int> > mat(n, vector<int>(n, 0));
  for (int i = 0; i < n; ++i) {
    int u = -1, k = -1, v = -1;
    fscanf(stdin, "%d %d", &u, &k);
    for (int j = 0; j < k; ++j) {
      fscanf(stdin, "%d", &v);
      mat[u - 1][v - 1] = 1;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (j) { fprintf(stdout, " "); }
      fprintf(stdout, "%d", mat[i][j]);
    }
    fprintf(stdout, "\n");
  }
  return 0;
}