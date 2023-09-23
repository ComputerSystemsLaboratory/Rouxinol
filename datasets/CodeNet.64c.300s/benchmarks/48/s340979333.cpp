#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  int n;
  vector<int> v;
  v.resize(999999);
  fill(v.begin(), v.end(), 1);
  v[0] = 0;
  v[1] = 0;
  for (int i = 0; i * i < v.size(); ++i) {
    while (v[i] == 0) ++i;
    for (int m = i + 1; m < v.size(); ++m) {
      if (m % i == 0) {
        v[m] = 0;
      }
    }
  }
  while (cin >> n) {
      cout << accumulate(v.begin(), v.end() - (v.size() - (n + 1)), 0) << endl;
  }
  return 0;
}