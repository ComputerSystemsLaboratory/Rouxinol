#include <iostream>

const int N = 100;

int main(void) {
  int n = 0;
  int x = 0;

  std::cin >> n >> x;

  while (!((n == 0) && (x == 0))) {
    int count = 0;
    bool generated[N + 1][N + 1][N + 1] = {false};
    
    for (int i = 1; i <= n - 2; i++ ) {
      for (int j = 1; j <= n - 1; j++) {
	for (int k = 1; k <= n; k++) {
	  if ((i == j) || (j == k) || (i == k)) {
	    continue;
	  }

	  if (generated[i][j][k]) {
	    continue;
	  }

	  if ((i + j + k) == x) {
	    count++;

	    generated[i][j][k] = true;
	    generated[i][k][j] = true;
	    generated[j][i][k] = true;
	    generated[j][k][i] = true;
	    generated[k][i][j] = true;
	    generated[k][j][i] = true;
	  }
	}
      }
    }

    std::cout << count << std::endl;

    std::cin >> n >> x;  
  }
  
  return 0;
}