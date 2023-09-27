#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>

#define EPS 1e-6

using namespace std;
typedef complex<double> coor;

double cross(coor a, coor b)
{
  return a.real() * b.imag() - a.imag() * b.real();
}

double dot(coor a, coor b)
{
  return a.real() * b.real() + a.imag() * b.imag();
}

int main()
{
  double _x[3][2], _p[2];
  while (scanf(" %lf %lf %lf %lf %lf %lf %lf %lf ", &_x[0][0], &_x[0][1], &_x[1][0], &_x[1][1], &_x[2][0], &_x[2][1], &_p[0], &_p[1]) == 8) {
    coor x[3], g(0, 0);
    for (int i = 0; i < 3; i++) {
      x[i] = coor(_x[i][0], _x[i][1]);
      g += x[i];
    }
    g /= 3;
    coor p = coor(_p[0], _p[1]);
    coor d;
    for (int i = 0; i < 3; i++) {
      d = x[(i + 1) % 3] - x[i];
      if ((dot(d * coor(0, 1), g) - dot(d * coor(0, 1), x[i])) * (dot(d * coor(0, 1), p) - dot(d * coor(0, 1), x[i])) < 0) {
	printf("NO\n");
	goto next;
      }
    }
    printf("YES\n");
  next:;
  }
}