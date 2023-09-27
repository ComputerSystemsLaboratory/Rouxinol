#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, count;
  while (cin >> n, n) {
    count = 0;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (i*(i+1) - j*(j+1) == 2*n) count++;
      }
    }
    cout << count << el;
  }
}