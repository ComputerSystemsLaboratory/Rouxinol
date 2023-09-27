#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n, q;
  fscanf(stdin, "%d", &n);
  vector<int> S(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &S[i]);
  }
  S.push_back(-1);
  fscanf(stdin, "%d", &q);
  int ans = 0, val = 0;
  for (int i = 0; i < q; ++i) {
    fscanf(stdin, "%d", &val);
    S.back() = val;
    int j = 0;
    while (S[j] != val) { ++j; }
    ans += (j != n);
  }
  fprintf(stdout, "%d\n", ans);
  return 0;
}