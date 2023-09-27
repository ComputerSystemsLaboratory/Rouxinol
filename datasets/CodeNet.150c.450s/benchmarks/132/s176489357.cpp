#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>

#define el endl
#define fd fixed

using namespace std;

int main() {
  while (1) {
    int n, p, i = 0, tmp_p;
    cin >> n >> p;
    if (n == 0 && p == 0) break;
    vector<int> stone(n, 0);
    tmp_p = p;
    while (1) {
      if (tmp_p > 0) {
        stone[i]++;
        tmp_p--;
      } else {
        tmp_p = stone[i];
        stone[i] = 0;
      }
      if (stone[i] == p) break;
      i = (i+1) % n;
    }
    cout << i << el;
  }
}