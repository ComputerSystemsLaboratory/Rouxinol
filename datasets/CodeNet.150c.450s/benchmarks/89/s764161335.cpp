#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
  vector<bool> E(1000000, true);
  E[0] = false;
  E[1] = false;
  for (int i = 2; i*i < 1000000; ++i) {
    for (int j = i; i*j < 1000000; ++j) {
      E[i*j] = false;
    }
  }
  int a, d, n, t;
  while (cin >> a >> d >> n, a) {
    t = a;
    while (n) {
      if (E[t]) --n;
      t += d;
    }
    cout << t-d << endl;
  }
}