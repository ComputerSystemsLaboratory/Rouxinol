#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, m, p, x, sum, num;
  while (cin >> n >> m >> p, n | m | p) {
    sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> x;
      sum += x;
      if (i == m-1) num = x;
    }
    if (num == 0) cout << num << el;
    else cout << sum*(100-p)/num << el;
  }
}