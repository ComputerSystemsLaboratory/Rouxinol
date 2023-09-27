#include <bits/stdc++.h>

int main() {

  int W, H, x, y, r;

  std::cin >> W >> H >> x >> y >> r;

  if( 0 <= x-r && x-r <= W &&
      0 <= x+r && x+r <= W &&
      0 <= y-r && y-r <= H &&
      0 <= y+r && y+r <= H   ) {
    std::cout << "Yes" << std::endl;
  }
  else {
    std::cout << "No" << std::endl;
  }
  
  return 0;
}