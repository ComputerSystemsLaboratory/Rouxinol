#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, days, y, m, d;
  cin >> n;
  while (n--) {
    days = 196470;
    cin >> y >> m >> d;
    if (d > 1) days -= d-1;
    while (--m) {
      if (y % 3 != 0 && m % 2 == 0) days -= 19;
      else days -= 20;
    }
    while (--y) {
      if (y % 3 == 0) days -= 200;
      else days -= 195;
    }
    cout << days << el;
  }
}