#include <iostream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]) {
  int q;
  std::cin >> q;
  for (size_t _ = 0; _ < q; _++) {
    std::string x, y;
    std::cin >> x;
    std::cin >> y;

    std::vector<std::vector<int> > dp(x.size()+1, std::vector<int>(y.size()+1));
    for (size_t ii=0; ii<x.size(); ++ii){
      for(size_t jj=0; jj<y.size(); ++jj){
        size_t i = ii + 1;
        size_t j = jj + 1;
        if (x[ii]==y[jj]){
          dp[i][j] = dp[i-1][j-1] + 1;
        }
        else{
          dp[i][j] = std::max(dp[i-1][j], dp[i][j-1]);
        }
      }
    }
    std::cout << dp[x.size()][y.size()] << std::endl;
  }
  return 0;
}