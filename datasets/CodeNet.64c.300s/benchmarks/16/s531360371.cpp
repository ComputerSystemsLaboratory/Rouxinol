#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<ll> v(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%lld", &v[i]);
  }
  ll ans = -INF;
  ll mn = v[0];
  for (int i = 1; i < n; ++i) {
    ans = max(ans, v[i] - mn);
    mn = min(mn, v[i]);
  }
  fprintf(stdout, "%lld\n", ans);
  return 0;
}