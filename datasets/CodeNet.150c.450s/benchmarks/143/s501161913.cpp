#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  map<int, long long> cnt;
  for (int p : a)
    ++cnt[p];
  int q;
  cin >> q;
  while (q--) {
    int b, c;
    cin >> b >> c;
    if (cnt.count(b)) {
      sum -= 1ll * b * cnt[b];
      sum -= 1ll * c * cnt[c];
      cnt[c] += cnt[b];
      cnt[b] = 0;
      sum += 1ll * c * cnt[c];
    }
    cout << sum << '\n';
  }   
  return 0;
}