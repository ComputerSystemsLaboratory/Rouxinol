#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
  const int sqrtN = 512;
  int n, q;
  cin >> n >> q;
  int bucket_sz = (n+sqrtN-1)/sqrtN;
  vector<ll> a(n, 0);
  vector<ll> bucketSum(bucket_sz, 0);
  auto update = [&](int k, int x) {
    a[k] += x;
    k /= sqrtN;
    int l = k*sqrtN, r = (k+1)*sqrtN;
    ll sum = 0;
    for(int i = l; i < r; ++i) sum += a[i];
    bucketSum[k] = sum;
  };
  auto query = [&](int s, int t)->ll{
    ll res = 0;
    for(int i = 0; i < bucket_sz; ++i) {
      int l = i*sqrtN, r = (i+1)*sqrtN;
      if(r <= s || t <= l) continue;
      if(s <= l && r <= t) res += bucketSum[i];
      else {
	for(int j = max(s, l); j < min(t, r); ++j) {
	  res += a[j];
	}
      }
    }
    return res;
  };
  while(q--) {
    ll t, x, y;
    cin >> t >> x >> y;
    if(t == 0) update(x-1, y);
    else cout << query(x-1, y) << endl;
  }

  return 0;
}

