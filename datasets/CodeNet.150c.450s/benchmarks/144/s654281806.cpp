#include <iostream>
#include <vector>

int main() {
  using std::vector;
  int n, m, l;
  std::cin >> n >> m >> l;
  vector<vector<int>> a(n, vector<int>(m, 0)), b(m, vector<int>(l, 0));
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }
  
  for (int j = 0; j < m; j++) {
    for (int k = 0; k < l; k++) {
      std::cin >> b[j][k];
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < l; k++) {
      long long cik = 0;
      for (int j = 0; j < m; j++) {
        cik += a[i][j]*b[j][k];
      }
      if (k != 0) std::cout << " ";
      std::cout << cik;
    }
    std::cout << "\n";
  }
  
  return 0;
}