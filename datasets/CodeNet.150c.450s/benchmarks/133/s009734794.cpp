#define _GIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main(void) {
  int D;
  cin >> D;
  vector<int> c(26);  // しばらく開催されないときの満足度の下がりやすさ
  rep(i, 26) {
    cin >> c[i];
  }
  vector<vector<int>> s(D, vector<int>(26)); // d日目にタイプjを開催すると得られる満足度
  rep(i, D) {
    rep(j, 26) {
      cin >> s[i][j];
    }
  }

  vector<int> t(D);
  rep(i, D) {
    cin >> t[i];
  }

  int v = 0;
  vector<int> last(26, 0);
  rep(i, D) {
    int type = t[i] - 1;
    int day = i + 1;
    // コンテスト開催で満足度アップ
    v += s[i][type];
    last[type] = day;
    // 一日の終わりに満足度低下
    rep(j, 26) {
      v -= c[j] * (day - last[j]);
    }

    cout << v << endl;
  }
  
  return 0;
}