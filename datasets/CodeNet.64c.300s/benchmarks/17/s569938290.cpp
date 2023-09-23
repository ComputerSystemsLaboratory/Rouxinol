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
  int x, y, s, max_sum;
  while (cin >> x >> y >> s, x|y|s) {
    max_sum = 0;
    for (int i = 1; i < s; i++)
      for (int j = i; j < s; j++)
        if (i*(100+x)/100 + j*(100+x)/100 == s && i*(100+y)/100 + j*(100+y)/100 > max_sum)
          max_sum = i*(100+y)/100 + j*(100+y)/100;
    cout << max_sum << el;
  }
}