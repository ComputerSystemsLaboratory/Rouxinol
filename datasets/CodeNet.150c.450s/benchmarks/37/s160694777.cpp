#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  double a, b, c, d, e, f, det, x, y;
  while(cin >> a >> b >> c >> d >> e >> f) {
	det = a * e - b * d;
	x = (double)(e * c - b * f) / det;
	y = (double)(-d * c + a * f) / det;
	if(x == -0.000) {
	  x = 0.000;
	}
	if(y == -0.000) {
	  y = 0.000;
	}
	printf("%.3f %.3f\n", x, y);
  }
  return 0;
}