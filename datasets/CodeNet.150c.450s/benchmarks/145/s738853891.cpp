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
  map<string, int> gedo;
  while (cin >> in) {
    if (ans2.size() < in.size()) ans2 = in;
    gedo[in]++;
  }

  int tm = 0;
  for (auto it = gedo.begin(); it != gedo.end(); ++it)
    if (tm < (*it).second) {
      ans1 = (*it).first;
      tm = (*it).second;
    }

  cout << ans1 << " " << ans2 << endl;

  return 0;
}