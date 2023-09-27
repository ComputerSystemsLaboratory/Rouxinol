#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

int main() {
  int e;
  while (cin >> e, e) {
    int x = 0, y = 0, z = 0, min = INF;
    for (z = 0; z*z*z <= e; z++) {
      for (y = 0; y*y <= e - z*z*z; y++) {
        x = e-y*y-z*z*z;
        if (x+y+z < min) min = x+y+z;
      }
    }
    cout << min << el;
  }
}