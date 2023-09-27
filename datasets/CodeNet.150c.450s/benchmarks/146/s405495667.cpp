#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  double x1, y1, x2, y2, x3, y3, x4, y4;
  for (int i = 0; i < N; i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double dx1 = x2 - x1;
    double dy1 = y2 - y1;
    double dx2 = x4 - x3;
    double dy2 = y4 - y3;
    if (dy1/dx1 == dy2/dx2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}