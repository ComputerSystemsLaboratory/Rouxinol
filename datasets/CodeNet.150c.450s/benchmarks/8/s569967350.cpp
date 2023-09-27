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
  int n;
  cin >> n;
  int scores[2] = {};
  for (int i = 0; i < n; ++i) {
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a == b) {
      ++scores[0];
      ++scores[1];
    } else if (lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())) {
      scores[1] += 3;
    } else {
      scores[0] += 3;
    }
  }
  cout << scores[0] << " " << scores[1] << endl;
}