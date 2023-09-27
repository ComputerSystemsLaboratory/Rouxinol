#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int n;
  int d = 100000;
  cin >> n;
  while (n--) {
    int r = d / 20;
    if (r % 1000 > 0)
      r = r - r % 1000 + 1000;
    d += r;
  }
  cout << d << endl;
}