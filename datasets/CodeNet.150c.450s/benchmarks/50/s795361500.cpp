#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> ans;
  int coin[6] = {500, 100, 50, 10, 5, 1};
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;

    int oturi = 1000 - n;
    int res = 0;
    rep(i,6) {
      if (oturi == 0) break;
      if (oturi < coin[i]) continue;
      res += oturi / coin[i];
      oturi = oturi % coin[i];
    }
    ans.push_back(res);
  }
  rep(i,ans.size()) cout << ans[i] << endl;
  return 0;
}

