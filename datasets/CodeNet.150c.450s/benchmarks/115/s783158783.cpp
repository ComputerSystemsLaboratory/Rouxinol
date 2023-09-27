#include <iostream>
#include <string>
const int MAX_X = 1100;
const int MAX_Y = 1100;


int main() {
  std::string X;
  std::string Y;
  int q;
  int answers[160];
  std::cin >> q;
  int dp[MAX_X][MAX_Y];
  
  for(int p=0; p<q; ++p) {
    std::cin >> X;
    std::cin >> Y;

    for(int i=0; i<MAX_X; ++i) {
      for(int j=0; j<MAX_Y; ++j) {
        dp[i][j] = 0;
      }
    }

    int xlen = X.size();
    int ylen = Y.size();

    X = " " + X;
    Y = " " + Y;

    for(int i=1; i<=xlen; ++i) {
      for(int j=1; j<=ylen; ++j) {
        if(X[i] == Y[j]) {
          dp[i][j] = dp[i-1][j-1] + 1;
        } else {
          dp[i][j] = std::max(
            dp[i][j-1],
            dp[i-1][j]
          );
        }
      }
    }
    answers[p] = dp[xlen][ylen];  
  }

  for(int i=0; i<q; ++i) {
    std::cout << answers[i] << std::endl;
  }

}
