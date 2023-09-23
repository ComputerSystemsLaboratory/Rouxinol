#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int a[4], b[4];
  while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    int hit = 0;
    int blow = 0;
    for (int i = 0; i < 4; i++) {
      if (a[i] == b[i]) hit++;
    }
    for (int i = 0; i < 4; i++) {
      if (find(a, a+4, b[i]) != a+4) blow++;
    }
    blow -= hit;
    cout << hit << " " << blow << endl;
  }
}