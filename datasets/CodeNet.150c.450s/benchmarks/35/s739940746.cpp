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
  while (scanf(" %d ", &N) == 1) {
    if (N == 0) {break;}
    vector<int> series(N);
    
    for (int i = 0; i < N; i++) {
      int n;
      scanf(" %d ", &n);
      series[i] = n;
    }
    
    int mx = -1000000000;
    for (int i = 0; i < N; i++) {
      int sum = 0;
      for (int j = i; j < N; j++) {
	sum += series[j];

	mx = max(mx, sum);
      }
    }
    printf("%d\n", mx);
  }
  return 0;
}