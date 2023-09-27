#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <stdint.h>
using namespace std;

int sieve(int x)
{
  int ret = 0;
  vector<bool> v(x + 1, true);
  for (int i = 2; i <= x; i++) {
    if (v[i]) {
      ret++;
      for (int j = i + i; j <= x; j += i) {
        v[j] = false;
      }
    }
  }

  return ret;
}

int main()
{
  for (int n; cin >> n; ) {
    cout << sieve(n) << endl;
  }
  return 0;
}