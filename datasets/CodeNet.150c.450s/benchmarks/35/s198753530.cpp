#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  // ifstream cin("../test.txt");
  int n;
  while (true) {
    cin >> n;
    if (!n) break;
    vector<int> a(n);
    vector<int> sub_sum(n+1); // a[0] + ... + a[i]
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sub_sum[0] = 0;
    int max_sum = -1000000000;
    for (int i = 0; i <= n; i++) {
      sub_sum[i] = sub_sum[i-1] + a[i-1];
    }
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        max_sum = max(max_sum, sub_sum[i] - sub_sum[j]);
      }
    }
    cout << max_sum << endl;
  }
}