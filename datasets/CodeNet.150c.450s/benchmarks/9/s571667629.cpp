#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

int main() {
  while (true) {
    string d;
    cin >> d;
    if (d == "-") break;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int h;
      cin >> h;
      string bottom = d.substr(0, h);
      string top = d.substr(h, string::npos);
      d = top + bottom;
    }
    cout << d << endl;
  }
}