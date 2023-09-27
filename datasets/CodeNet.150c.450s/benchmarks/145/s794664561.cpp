#include <bits/stdc++.h>

using namespace std;

#define int long long
#define PB push_back
#define PPB pop_back
typedef pair<int, int> pii;
static const int INF = 1LL<<61;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string ans1, ans2, in;
  int tm = 0;
  map<string, int> gedo;
  while (cin >> in) {
    if (ans2.size() < in.size()) ans2 = in;
    if (tm < ++gedo[in]) {ans1 = in;tm = gedo[in];}
  }

  cout << ans1 << " " << ans2 << endl;

  return 0;
}