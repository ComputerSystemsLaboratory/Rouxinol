#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int a[101];
  for (int i = 0; i < 101; i++) {
    a[i] = 0;
  }

  int n;
  while (cin >> n) {
    a[n]++;
  }

  int mx = 0;
  for (int i = 1; i < 101; i++) {
    mx = max(mx, a[i]);
  }

  for (int i = 1; i < 101; i++) {
    if (a[i] == mx)
      cout << i << endl;
  }
}