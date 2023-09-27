#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m, 0));
  vector<int> b(m, 0), c(n, 0);
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int j = 0; j < m; j++) cin >> b[j];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i] += a[i][j]*b[j];
    }
  cout << c[i] << "\n";
  }
  
  return 0;
}