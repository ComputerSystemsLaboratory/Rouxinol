#include <iostream>
#include <vector>

int main() {
  using std::vector;  
  int r, c;
  std::cin >> r >> c;
  vector<vector<int>> table(r+1, vector<int>(c+1, 0));
  
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      std::cin >> table[i][j];
      table[i][c] += table[i][j];
      table[r][j] += table[i][j];
    }
  }
  
  for (int i = 0; i < r; i++) {
    table[r][c] += table[i][c];
  }
  
  for (int i = 0; i < r+1; i++) {
    for (int j = 0; j < c+1; j++) {
      if (j != 0) std::cout << " ";
      std::cout << table[i][j];
    }
    std::cout << "\n";
  }
  
  return 0;
}