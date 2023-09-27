#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  for(;;) {
    int w, h;
    cin >> h >> w;
    if(h == 0 && w == 0) break;
    auto compare = [](int w, int h, int x, int y) {
      int dwh = w*w + h*h;
      int dxy = x*x + y*y;
      if(dwh == dxy) return h - y; // the same diag -> height
      return dwh - dxy;
    };
    int xx = 150, yy = 150; // tentative answer
    for(int y = 1; y <= 150; y++) {
      for(int x = y + 1; x <= 150; x++) {
        if(compare(w, h, x, y) < 0) { // x-y is bigger than w-h
          if(compare(xx, yy, x, y) > 0) { // x-y is smaller than xx-yy
            xx = x; // update the tentative answer
            yy = y;
          }
        }
      }
    }
    cout << yy << " " << xx << endl;
  }
  return 0;
}

