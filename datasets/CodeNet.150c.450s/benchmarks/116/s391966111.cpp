#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  while(1) {
    int n, k;
    cin >> n >> k;
    if(n == 0 && k == 0) break;

    vector<int> a(n);
    REP(i, n) cin >> a[i];
    
    int ans = 0;
    for(int i = 0; i < k; i++) {
      ans += a[i];
    }
    int mx = ans;
    for(int i = 0; i < n - k; i++) {
      mx = mx + a[k + i] - a[i];
      ans = max(mx, ans);
    }

    cout << ans << endl;
  }
  return 0;
}
