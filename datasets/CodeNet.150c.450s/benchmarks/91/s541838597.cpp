#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  int n;
  vector<int> v;
  while (cin >> n) {
    if (v.size() >= n + 1) {
      cout << accumulate(v.begin(), v.end() - (v.size() - (n + 1)), 0) << endl;
      continue;
    }
    v.resize(n + 1);
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
    cout << accumulate(v.begin(), v.end(), 0) << endl;
  }
  return 0;
}