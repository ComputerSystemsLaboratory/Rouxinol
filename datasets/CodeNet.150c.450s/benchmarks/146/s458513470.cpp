#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

int main() {
  int n;
  double x[5], y[5], ep;
  pair<double, double> AB, CD;
  cin >> n;
  while(n--) {
    for(int i = 1; i <= 4; i++) {
      cin >> x[i] >> y[i];
    }
    AB.first = x[2] - x[1];
    AB.second = y[2] - y[1];
    CD.first = x[4] - x[3];
    CD.second = y[4] - y[3];
    ep = AB.first * CD.second - AB.second * CD.first;
    if (fabs(ep) < 1e-10) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}