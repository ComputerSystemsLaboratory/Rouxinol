
#include <iostream>

int main(int argc, const char * argv[]) {
  // insert code here...
  int W, H;
  int w, h;
  int x, y, r;
  std::cin >> W >> H >> x >> y >> r;
  w = W - r; h = H - r;
  if ((r <= x && x <= w) && (r <= y && y <= h) ) {
    std::cout << "Yes\n";
  } else {
    std::cout << "No\n";
  }
  return 0;
}