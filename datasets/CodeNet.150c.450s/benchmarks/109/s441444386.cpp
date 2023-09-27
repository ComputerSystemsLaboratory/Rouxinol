#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
#include<string>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int main() {
  while(true) {
    int n;
    cin >> n;
    int sum[86402] = {0};
    if(n == 0) break;
    rep(i, n) {
      string a, b;
      cin >> a >> b;
      int ah, am, as, bh, bm, bs;
      ah = atoi(a.substr(0,2).c_str());
      am = atoi(a.substr(3,2).c_str());
      as = atoi(a.substr(6,2).c_str());
      bh = atoi(b.substr(0,2).c_str());
      bm = atoi(b.substr(3,2).c_str());
      bs = atoi(b.substr(6,2).c_str());
      int at, bt;
      at = 60 * 60 * ah + 60 * am + as;
      bt = 60 * 60 * bh + 60 * bm + bs;
      // cout << at << " " << bt << endl;
      sum[at]++;sum[bt]--;
    }
    int ans;
    ans = sum[0];
    rep(i, 86400) {
      sum[i+1] += sum[i];
      ans = max(ans, sum[i+1]);
    }
    cout << ans << endl;
  }
  return 0;
}
