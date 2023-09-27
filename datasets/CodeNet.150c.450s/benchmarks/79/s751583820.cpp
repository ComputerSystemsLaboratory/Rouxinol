#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>

#define el endl
#define fd fixed

using namespace std;

int main() {
  int n, r, p, c;
  while (cin >> n >> r, n+r) {
    vector<int> yama;
    for (int i = n; i > 0; i--) yama.push_back(i);
    while (r--) {
      cin >> p >> c;
      rotate(yama.begin(), yama.begin()+p-1, yama.begin()+p-1+c);
    }
    cout << yama[0] << el;
  }
}