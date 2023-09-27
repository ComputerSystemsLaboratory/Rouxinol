#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int memo[25][2005];

bool rec(int ix, int val, vector<int>& v)
{
  if (val == 0) { return true; }
  if (ix >= v.size()) { return false; }
  if (memo[ix][val] != -1) { return memo[ix][val]; }
  if (v[ix] <= val) {
    if (rec(ix + 1, val - v[ix], v)) {
      memo[ix][val] = 1;
      return true;
    }
  }
  bool ret = rec(ix + 1, val, v);
  memo[ix][val] = ret ? 1 : 0;
  return ret;
}

int main()
{
  int n;
  fscanf(stdin, "%d", &n);
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &A[i]);
  }
  int q;
  fscanf(stdin, "%d", &q);
  memset(memo, -1, sizeof(memo));
  for (int i = 0; i < q; ++i) {
    int val = 0;
    fscanf(stdin, "%d", &val);
    fprintf(stdout, "%s\n", rec(0, val, A) ? "yes" : "no");
  }
  return 0;
}