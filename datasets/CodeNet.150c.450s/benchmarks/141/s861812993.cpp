#include <iostream>
using namespace std;
int main() {
  float x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    float a_x = x2 - x1, a_y = y2 - y1;
    float b_x = x3 - x1, b_y = y3 - y1;
    float c_x = xp - x1, c_y = yp - y1;
    float det = a_x * b_y - a_y * b_x;
    float s = (b_y * c_x - b_x * c_y) / det, t = (-a_y * c_x + a_x * c_y) / det;
    cout << ((0 <= s && s <= 1 && 0 <= t && t <= 1 && s + t <= 1) ? "YES" : "NO") << endl;
  }
}