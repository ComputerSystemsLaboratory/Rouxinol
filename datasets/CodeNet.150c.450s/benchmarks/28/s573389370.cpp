#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

bool check(vector<int> v, ll p, int k)
{
  ll sum = 0;
  int n = v.size();
  int ntrucks = 0;
  for (int i = 0; i < n; ++i) {
    if (v[i] > p) { return false; }
    if (sum + v[i] > p) {
      if (++ntrucks > k) { return false; }
      sum = 0;
    }
    sum += v[i];
  }
  ntrucks += sum > 0;
  return ntrucks <= k;
}

int main()
{
  int n, k;
  fscanf(stdin, "%d %d", &n, &k);
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &v[i]);
  }

  ll left = 0, right = 100000LL * 10000;
  ll mid = 0;
  while (left < right) {
    mid = (left + right) / 2;
    // fprintf(stderr, "DEBUG: left=%lld, right=%lld, mid=%lld\n", left, right, mid);
    if (check(v, mid, k)) {
      // fprintf(stderr, "DEBUG: ok, mid=%lld\n", mid);
      right = mid;
    }
    else { left = mid + 1; }
  }
  fprintf(stdout, "%lld\n", right);
  return 0;
}