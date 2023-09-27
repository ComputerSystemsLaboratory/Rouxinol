#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <cstdio>
#include <complex>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n, INT_MAX);
  int a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    *lower_bound(dp.begin(), dp.end(), a) = a;
  }
  cout << lower_bound(dp.begin(), dp.end(), INT_MAX) - dp.begin() << endl;
}