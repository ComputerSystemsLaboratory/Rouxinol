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
    string line;
    getline(cin, line);
    if (line == "0") break;
    int sum = 0;
    for (char c : line) {
      int n = c - 48;
      sum += n;
    }
    cout << sum << endl;
  }
}