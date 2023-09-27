#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float sum;
  int n;
  while (cin >> n) {
    sum = 100000;
    for (int i = 0; i < n; i++) {
      sum *= 1.05;
      sum = ceil(sum / 1000) * 1000;
    }
    cout << (int)sum << endl;
  }
  return 0;
}