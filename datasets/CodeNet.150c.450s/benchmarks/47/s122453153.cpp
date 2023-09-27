#include <iostream>

int main(){
  int x, y, r, W, H;
  std::cin >> W >> H >> x >> y >> r;
  if(x >= r && x + r <= W && y >= r && y + r <= H){
    std::cout << "Yes" << std::endl;
}
  else std::cout << "No" << std::endl;
}

