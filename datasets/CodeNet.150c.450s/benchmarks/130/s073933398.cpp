#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > matA;
  matA.resize(n, vector<int>(m));
  vector<int> matB(m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int x;
      cin >> x;
      matA[i][j] = x;
    }
  }

  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    matB[i] = x;
  }

  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j < m; j++) {
      x += matA[i][j] * matB[j];
    }
    cout << x << endl;
  }

  return 0;
}

