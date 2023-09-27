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
  string s, p;
  cin >> s;
  cin >> p;
  string ring = s + s;
  if (ring.find(p) != string::npos) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}