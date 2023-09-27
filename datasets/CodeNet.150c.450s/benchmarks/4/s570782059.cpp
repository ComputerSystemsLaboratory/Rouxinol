#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

char grade(int m, int f, int r) {
  if (m < 0 || f < 0) {
    return 'F';
  }
  int total = m + f;
  if (80 <= total) {
    return 'A';
  }
  if (65 <= total) {
    return 'B';
  }
  if (50 <= total) {
    return 'C';
  }
  if (30 <= total) {
    if (50 <= r) {
      return 'C';
    }
    return 'D';
  }
  return 'F';
}

int main() {
  while (true) {
    int m, f, r;
    cin >> m >> f >> r;
    if (m < 0 && f < 0 && r < 0) {
      break;
    }
    cout << grade(m, f, r) << endl;
  }
}