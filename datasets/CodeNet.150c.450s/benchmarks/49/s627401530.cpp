#include <iostream>
#include <limits.h>

#define el endl
#define fd fixed

using namespace std;

int main() {
  while (1) {
    int n;
    cin >> n;
    int m = n;
    if (n == 0) break;
    int max = INT_MIN;
    int min = INT_MAX;
    int ave = 0;
    while (m--) {
      int x;
      cin >> x;
      ave += x;
      if (x < min) min = x;
      if (x > max) max = x;
    }
    ave = ave - (max + min);
    ave = ave / (n-2);
    cout << ave << el;
  }
}