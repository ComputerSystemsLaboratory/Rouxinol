#include <iostream>
#define MAX 1010

int C[MAX][MAX];

int main() {
  int n;
  std::cin >> n;
  int answers[160];

  for(int m=0; m<n; ++m) {
    std::string X;
    std::string Y;
    std::cin >> X;
    std::cin >> Y;

    // initialize
    for(int k=0; k<MAX; ++k) {
      for(int p=0; p<MAX; ++p) C[k][p] = 0;
    }

    // lcs
    int xlen = X.size();
    int ylen = Y.size();

    X = ' ' + X;
    Y = ' ' + Y;

    for(int i=1; i<=xlen; ++i) {
      for(int j=1; j<=ylen; ++j) {
        if(X[i] == Y[j]) {
          C[i][j] = C[i-1][j-1] + 1;
        } else {
          C[i][j] = std::max(C[i-1][j], C[i][j-1]);
          
        }
      }
    }

    answers[m] = C[xlen][ylen];
  }

  for(int h=0; h<n; ++h) {
    std::cout << answers[h] << std::endl;
  }
}
