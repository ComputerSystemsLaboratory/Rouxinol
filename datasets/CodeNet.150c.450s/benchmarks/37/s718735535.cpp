#include <cmath>
#include <cstdlib>
#include <cstdio>

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  double a, b, c, d, e, f; 
  double x, y;

  while( std::cin >> a >> b >> c >> d >> e >> f ) {   
    x = (c * e - b * f) / (a * e - b * d);
    y = (c * d - a * f) / (b * d - a * e);

    x = (double)(long)(x*1000);
    y = (double)(long)(y*1000);

    x /= 1000;
    y /= 1000;    

    printf("%.03lf %.03lf\n", x, y); 
  }

  return 0;
}