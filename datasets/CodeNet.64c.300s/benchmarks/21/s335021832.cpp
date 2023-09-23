#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  for (double a, b, c, d, e, f;
       cin >> a >> b >> c >> d >> e >> f;
       ) {
    double x = (c*e - f*b) / (a*e - d*b);
    double y = (c - a*x) / b;
    if (abs(x) < 1e-10) x = 0;
    if (abs(y) < 1e-10) y = 0;
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}