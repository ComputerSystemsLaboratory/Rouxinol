#include <iostream>

const int N = 100;

int main(void) {
  int r = 0;
  int c = 0;

  std::cin >> r >> c;

  int t[N + 1][N + 1] = {0};

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      std::cin >> t[i][j];
      
      t[r][c] += t[i][j];
      t[i][c] += t[i][j]; 
      t[r][j] += t[i][j];
    }
  }

  for (int i = 0; i <= r; i++) {
    for (int j = 0; j <= c; j++) {
      std::cout << t[i][j];

      if (j < c) {
	std::cout << " ";
      }
    }

    std::cout << std::endl;
  }
  
  return 0;
}