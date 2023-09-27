#include <iostream>

int main(int argc, char const *argv[]) {
  int W=0,H=0,x=0,y=0,r=0;
  std::cin >> W >> H >> x >> y >> r;

  if(x-r < 0 || x+r > W || y-r < 0 || y+r > H){
    std::cout << "No" << std::endl;
  }else std::cout << "Yes" << std::endl;
  return 0;
}