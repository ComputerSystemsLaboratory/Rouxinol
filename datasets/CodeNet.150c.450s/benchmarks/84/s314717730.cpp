#include <bits/stdc++.h>
using namespace std;

long long x;
vector<long long> v;

long long solve(vector<long long> &a);

int main() {
  cin >> x;
  v.resize(x);
  for(int i = 0; i < x; ++i) cin >> v[i];
  cout << solve(v) << endl;
  return 0;
}

long long solve(vector<long long> &a) {
  int n = a.size();
  if(n <= 1) return 0;
  long long res = 0;
  vector<long long> b(a.begin(), a.begin() + n / 2),
      c(a.begin() + n / 2, a.end());
  res += solve(b) + solve(c);
  int aid = 0, bid = 0, cid = 0, bsize = b.size(),
      csize = c.size();
  while(aid < n) {
    if(bid < bsize && (cid == csize || b[bid] <= c[cid]))
      a[aid++] = b[bid++];
    else {
      res += n / 2 - bid;
      a[aid++] = c[cid++];
    }
  }
  return res;
}
