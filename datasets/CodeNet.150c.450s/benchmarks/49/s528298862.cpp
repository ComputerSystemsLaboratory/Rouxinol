#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;

  while (cin >> n, n) {
    int t[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> t[i];
      sum += t[i];
    }
    sort(t, t + n);
    cout << (sum - t[0] - t[n - 1]) / (n - 2) << endl;
  }
}