#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> c(n);
  vector<vector<int>> M(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    int node;
    int d;
    cin >> node >> d;
    node--;

    for (int j = 0; j < d; j++) {
      int tmp;
      cin >> tmp;
      tmp--;
      M[i][tmp] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << M[i][j];
      if (j != n - 1) { cout << " "; }
    }
    cout << endl;
  }
}
