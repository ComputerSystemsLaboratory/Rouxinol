#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// const int d = 365;
const int cn = 26;
int main() {
  int d;
  cin >> d;
  int c[cn + 1], s[d + 1][cn + 1];
  for (int i = 1; i <= cn; i++) {
    cin >> c[i];
  }
  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= cn; j++) {
      cin >> s[i][j];
    }
  }

  int last[d + 1][cn + 1];
  for (int i = 0; i <= d; i++) {
    for (int j = 0; j <= cn; j++) {
      last[i][j] = 0;
    }
  }
  int t[d + 1];
  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= cn; j++) {
      last[i][j] = last[i - 1][j];
    }
    cin >> t[i];
    last[i][t[i]] = i;
  }

  int v[d + 1];
  v[0] = 0;
  // 各日の満足度
  for (int i = 1; i <= d; i++) {
    int v_down = 0;
    for (int j = 1; j <= 26; j++) {
      v_down += c[j] * (i - last[i][j]);
    }
    v[i] = v[i - 1] + s[i][t[i]] - v_down;
    // cout << "vd = " << v_down << endl;
  }

  // 出力
  for (int i = 1; i <= d; i++) {
    cout << v[i] << endl;
  }
  return 0;
}