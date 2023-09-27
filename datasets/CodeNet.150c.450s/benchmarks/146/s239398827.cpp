#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int n;
  cin >> n;
  while (n--) {
    float x[4], y[4];
    float eps = 1e-15;
    for (int i = 0; i < 4; i++) cin >> x[i] >> y[i];
    if (((abs(y[3] - y[2]) < eps && abs(x[3] - x[2]) < eps)) || (abs(x[1] - x[0]) < eps && abs(y[1] - y[0]) < eps)) {
      cout << "NO" << endl;
    } else if (abs((y[3] - y[2]) * (x[1] - x[0]) - (y[1] - y[0]) * (x[3] - x[2])) < eps) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}