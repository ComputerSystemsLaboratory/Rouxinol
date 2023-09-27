#include <iostream>
#include <vector>
using namespace std;
int main() {
  int D;
  cin >> D;
  vector<int> c(26);
  for (int &x : c) cin >> x;
  vector<vector<int>> s(D, vector<int>(26));
  for (auto &x : s) {
    for (int &y : x) cin >> y;
  }
  vector<int> t(D);
  for (int &x : t) {
    cin >> x;
    --x;
  }
  
  vector<vector<int>> last(D, vector<int>(26, -1));
  for (int d = 0; d < D; ++d) {
    if (d == 0) {
      last.at(d).at(t.at(d)) = d;
      continue;
    }
    for (int i = 0; i < 26; ++i) {
      if (t.at(d) == i) {
        last.at(d).at(i) = d;
      } else {
        last.at(d).at(i) = last.at(d-1).at(i);
      }
    }
  }
  vector<int> v(D);
  v.at(0) = s.at(0).at(t.at(0));
  for (int i = 0; i < 26; ++i) {
    v.at(0) -= c.at(i) * (0 - last.at(0).at(i));
  }
  for (int d = 1; d < D; ++d) {
    v.at(d) = v.at(d-1) + s.at(d).at(t.at(d));
    for (int i = 0; i < 26; ++i) {
      v.at(d) -= c.at(i) * (d - last.at(d).at(i));
    }
  }

  for (int i = 0; i < D; ++i) {
    cout << v.at(i) << endl;
  }
  return 0;
}
