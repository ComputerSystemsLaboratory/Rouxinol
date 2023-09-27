#include <iostream>
int main()
{
  int W, H, x, y, r;
  std::cin >> W >> H >> x >> y >> r;
  if(x - r >= 0 && x + r <= W){
    if(y - r >= 0 && y + r <= H) std::cout << "Yes\n";
    else std::cout << "No\n";
  } else std::cout << "No\n";
  return (0);
}