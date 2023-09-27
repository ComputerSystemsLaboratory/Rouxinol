

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
  stack<int> st;
  int n;
  while (scanf(" %d ", &n) == 1) {
    if (n == 0) {printf("%d\n", st.top());st.pop();}
    else {st.push(n);}
  }
  return 0;
}