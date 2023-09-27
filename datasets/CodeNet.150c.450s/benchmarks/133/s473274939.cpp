#include <bits/stdc++.h>
using namespace std;

int last(vector<int> &ts, int d, int i) {
  for (int idx = d; idx >= 0; idx--) {
    if (ts[idx] == i) {
      return idx + 1;
    }
  }
  return 0;
}

int main(void) {
  int d;
  cin >> d;
  vector<int> cs(26);
  for (int &c : cs) cin >> c;
  vector<vector<int>> sss(d, vector<int>(26));
  for (vector<int> &ss : sss) {
    for (int &s : ss) cin >> s;
  }
  vector<int> ts(d);
  for (int &t : ts) cin >> t;

  vector<int> satisfy(d);
  for (int i = 0; i < d; i++) {
    satisfy[i] = i == 0 ? 0 : satisfy[i - 1];
    satisfy[i] += sss[i][ts[i] - 1];
    for (int j = 0; j < 26; j++) {
      satisfy[i] -= cs[j] * ((i + 1) - last(ts, i, j + 1));
    }

    cout << satisfy[i] << endl;
  }

  return 0;
}