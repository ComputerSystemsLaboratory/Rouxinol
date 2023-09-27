#include <iostream>

const long N = 100;
const long M = 100;
const long L = 100;

int main(void) {
  long n = 0;
  long m = 0;
  long l = 0;

  long a[N][M] = {0};
  long b[M][L] = {0};
  long c[N][L] = {0};

  std::cin >> n >> m >> l;

  for (long i = 0; i < n; i++) {
    for (long j = 0; j < m; j++) {
      std::cin >> a[i][j];
    }
  }

  for (long i = 0; i < m; i++) {
    for (long j = 0; j < l; j++) {
      std::cin >> b[i][j];
    }
  }
  
  for (long i = 0; i < n; i++) {
    for (long j = 0; j < l; j++) {
      for (long k = 0; k < m; k++) {
	c[i][j] += (a[i][k] * b[k][j]);
      }

      std::cout << c[i][j];
      
      if (j < (l - 1)) {
      	std::cout << " ";
      }
    }
    
    std::cout << std::endl;
  }
      
  
  return 0;
}