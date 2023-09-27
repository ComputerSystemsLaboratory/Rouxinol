#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>
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
  int N;
  scanf(" %d ", &N);
  
  for (int i = 0; i < N; i++) {
    coor c[4];
    for (int j = 0; j < 4; j++) {
      double x, y;
      scanf(" %lf %lf ", &x, &y);
      c[j] = coor(x, y);
    }
    
    if (cross(c[1] - c[0], c[3] - c[2]) == 0) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}