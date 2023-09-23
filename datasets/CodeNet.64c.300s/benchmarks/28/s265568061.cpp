#include <iostream>
using namespace std;
void in_rectangle(int, int, int, int, int);
int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;
  in_rectangle(w, h, x, y, r);
}
void in_rectangle(int w, int h, int x, int y, int r) {
  if ((x-r >= 0) && (x+r <= w) && (y-r >= 0) && (y+r <= h))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}