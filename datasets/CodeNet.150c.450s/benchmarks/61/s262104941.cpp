#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, a, b, c, x, tmp, frame;
  while (cin >> n >> a >> b >> c >> x, n|a|b|c|x) {
    vector<int> y;
    frame = 0;
    for (int i = 0; i < n; i++) {
      cin >> tmp;
      y.push_back(tmp);
    }
    if (y[0] == x) y.erase(y.begin());
    while (!y.empty() && frame <= 10000) {
      frame++;
      x = (a*x+b)%c;
      if (x == y[0]) y.erase(y.begin());
    }
    if (frame == 10001) cout << "-1" << el;
    else cout << frame << el;
  }
}