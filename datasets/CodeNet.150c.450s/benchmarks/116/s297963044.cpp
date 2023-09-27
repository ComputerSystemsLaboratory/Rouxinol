#include <bits/stdc++.h>

using namespace std;

#define int long long
#define PB push_back
#define INF (1LL<<61LL)
//#define BP while(true){}

typedef pair<int, int> pii;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  while (cin >> n >> k, n) {
    int a[100005];

    for (int i = 0; i < n; ++i)
      cin >> a[i];

    int sum = 0, res = 0;
    for (int i = 0; i < k; ++i)
      sum += a[i];

    res = sum;

    for (int i = 1; i + k <= n; ++i) {
      sum -= a[i - 1];
      sum += a[i + k - 1];
      res = max(res, sum);
    }

    cout << res << endl;
  }
  
  return 0;
}