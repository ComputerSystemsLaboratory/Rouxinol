#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <stdint.h>
using namespace std;

int main()
{
  int n; cin >> n;
  int64_t x = 100;
  while(n--)
    x = ceil(x * 1.05);
  cout << x << "000" << endl;

  return 0;
}