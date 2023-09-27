#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<int> > A(n, vector<int>(m, 0));
  vector<vector<int> > B(m, vector<int>(l, 0));
  vector<vector<long long> > C(n, vector<long long>(l, 0));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> A.at(i).at(j);
    }
  }
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < l; ++j) {
      cin >> B.at(i).at(j);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      for (int k = 0; k < m; ++k) {
        C.at(i).at(j) += A.at(i).at(k) * B.at(k).at(j);
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < l; ++j) {
      cout << C.at(i).at(j);
      if (j == l - 1) cout << endl;
      else cout << " ";
    }
  }

  return 0;
}
