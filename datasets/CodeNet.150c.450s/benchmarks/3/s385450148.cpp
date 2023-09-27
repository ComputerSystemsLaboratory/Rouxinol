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
  string orig;
  int n;
  cin >> orig >> n;
  for (int i = 0; i < n; ++i) {
    string cmd;
    int a, b;
    cin >> cmd >> a >> b;
    if (cmd == "print") {
      cout << orig.substr(a, b - a + 1) << endl;
    } else if (cmd == "reverse") {
      reverse(orig.begin() + a, orig.begin() + b + 1);
    } else {
      string p;
      cin >> p;
      copy(p.begin(), p.end(), orig.begin() + a);
    }
  }
}