#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double a = x2 - x1, b = y2 - y1, c = x4 - x3, d = y4 - y3;
    if (a * d - b * c == 0.0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}