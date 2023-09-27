#include <iostream>
#include <vector>

bool find_earth(const std::vector<int>& c, int w, int h, int *x, int *y) {
  *x = -1;
  *y = -1;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (c[i*w+j]) {
        *x = i;
        *y = j;
        return true;
      }
    }
  }
  return false;
}

void spread(std::vector<int>& c, int x, int y, int w, int h) {
  c[x*w+y] = false;
  if (0 < x && c[(x-1)*w+y]) spread(c, x-1, y, w, h);
  if (x < h-1 && c[(x+1)*w+y]) spread(c, x+1, y, w, h);
  if (0 < y && c[x*w+(y-1)]) spread(c, x, y-1, w, h);
  if (y < w-1 && c[x*w+(y+1)]) spread(c, x, y+1, w, h);
  
  if (0 < x && 0 < y && c[(x-1)*w+(y-1)]) spread(c, x-1, y-1, w, h);
  if (x < h-1 && y < w-1 && c[(x+1)*w+(y+1)]) spread(c, x+1, y+1, w, h);
  if (0 < x && y < w-1 && c[(x-1)*w+(y+1)]) spread(c, x-1, y+1, w, h);
  if (0 < y && x < h-1 && c[(x+1)*w+(y-1)]) spread(c, x+1, y-1, w, h);
}

bool solve() {
  int w, h;
  std::cin >> w >> h;
  if (w == 0 && h == 0) return false;
  std::vector<int> c(w*h);
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      std::cin >> c[i*w+j];
    }
  }
  
  int cnt = 0, x, y;
  bool found = find_earth(c, w, h, &x, &y);
  while(found) {
    spread(c, x, y, w, h);
    cnt++;
    found = find_earth(c, w, h, &x, &y);
  }
  
  std::cout << cnt << std::endl;
  
  return true;
}

int main() {
  while(solve());
  return 0;
}
