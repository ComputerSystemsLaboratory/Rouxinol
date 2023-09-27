#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<vector<vector<int> > > house(5, vector<vector<int> >(4, vector<int>(11, 0)));
  for (int i = 0; i < n; ++i) {
    int b, f, r, v;
    fscanf(stdin, "%d %d %d %d", &b, &f, &r, &v);
    house[b][f][r] += v;
  }
  for (int i = 1; i <= 4; ++i) {
    if (i != 1) {
      fprintf(stdout, "%s\n", string(20, '#').c_str());
    }
    for (int j = 1; j <= 3; ++j) {
      for (int k = 1; k <= 10; ++k) {
        fprintf(stdout, "%2d", house[i][j][k]);
      }
      fprintf(stdout, "\n");
    }
  }
  return 0;
}