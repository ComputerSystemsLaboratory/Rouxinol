#include <bits/stdc++.h>
using namespace std;

int main() {
  int D; cin >> D;

  vector<int> C(26);
  for (int i = 0; i < 26; i++) cin >> C.at(i);

  vector<vector<int>> S(D, vector<int>(26));
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) cin >> S.at(i).at(j);
  }

  vector<int> T(D);
  for (int i = 0; i < D; i++) {
    cin >> T.at(i);
    T.at(i)--;
  }

  vector<int> L(26);
  long long v = 0;

  for (int d = 0; d < D; d++) {
    v += S.at(d).at(T.at(d));
    L.at(T.at(d)) = d+1;
    for (int i = 0; i < 26; i++) {
      v -= C.at(i) * (d+1 - L.at(i));
    }
    cout << v << endl;
  }
}