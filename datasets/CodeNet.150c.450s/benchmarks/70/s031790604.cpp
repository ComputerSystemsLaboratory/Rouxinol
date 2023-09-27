#include <iostream>
#include <string>
using namespace std;
int main() {
  int m[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string w[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
    "Saturday", "Sunday"};
  int x, y;
  while (cin >> x >> y) {
    if (x == 0) break;
    int d = 2;
    while (--x)
      d += m[x];
    d += y;
    cout << w[d % 7] << endl;
  }
}