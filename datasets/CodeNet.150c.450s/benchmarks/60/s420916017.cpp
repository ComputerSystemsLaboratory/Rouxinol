#include <iostream>
#include <vector>


int main(int argc, char const *argv[]) {
  int n; // .. 100
  std::cin >> n;


  std::vector<std::vector<bool> > adj(n, std::vector<bool>(n));

  for(int q=0; q<n; ++q){
    int i_plus_1, k;
    std::cin >> i_plus_1;
    std::cin >> k;
    for(int p=0; p<k; ++p){
      int j_plus_1;
      std::cin >> j_plus_1;
      adj[i_plus_1-1][j_plus_1-1] = true;
    }
  }

  for(int i=0; i<n; ++i){
      for(int j=0; j<n; ++j){
        std::cout  <<  adj[i][j] << (j==n-1 ? "" : " "); 
      }
      std::cout << std::endl;
  }

  return 0;
}