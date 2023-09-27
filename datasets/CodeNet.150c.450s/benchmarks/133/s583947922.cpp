#include <bits/stdc++.h>
using namespace std;

int main() {
  int D;
  cin >> D;
  const int T = 26;
  vector<int> c(T+1);
  vector<vector<long>> s(D+1, vector<long>(T+1));
  map<int, int> last;
  for (int i = 1; i <= D; i++) {
    last[i] = 0;
  }
  vector<long> t(D+1);
  long satis = 0;
  
  // 入力
  for (int i = 1; i <= T; i++) {
    cin >> c.at(i);
  }
  for (int i = 1; i <= D; i++) {
    for (int j = 1; j <= T; j++) {
      cin >> s.at(i).at(j);
    }
  }
  for (int i = 1; i <= D; i++) {
    cin >> t.at(i);
  }
  
  // 処理
  for (int i = 1; i <= D; i++) {
    // last更新
    last[t.at(i)] = i;
    // 増加分
    satis += s.at(i).at(t.at(i));
    // 減少分
    for (int j = 1; j <= T; j++) {
      if (j != t.at(i)) {
        satis -= c.at(j) * (i - last[j]);
      }
    }
    cout << satis << endl;
  }
  return 0;
}