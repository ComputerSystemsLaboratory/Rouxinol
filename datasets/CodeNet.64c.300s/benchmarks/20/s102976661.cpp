#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>
#include <stack>

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
  int n;
  while (scanf(" %d ", &n) == 1) {
    int sum = 0;
    for (int i = n; i < 600; i += n) {
      sum += i * i * n;
    }
    printf("%d\n", sum);
  }
}