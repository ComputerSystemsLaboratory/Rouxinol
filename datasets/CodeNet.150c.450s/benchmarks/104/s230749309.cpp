#include <cstdio>
#include <bitset>
#include <cmath>
#include <complex>
#include <vector>
#include <algorithm>

#define EPS 1e-6
using namespace std;

double cross(complex<double> a, complex<double> b)
{
  return a.real() * b.imag() - a.imag() * b.real();
}

double dot(complex<double> a, complex<double> b)
{
  return a.real() * b.real() + a.imag() * b.imag();
}

int main()
{
  int W, N;
  scanf(" %d %d ", &W, &N);
  vector<pair<int, int> > lines;
  for (int i = 0; i < N; i++) {
    int x, y;
    scanf(" %d,%d ", &x, &y);
    lines.push_back(make_pair(x, y));
  }
  reverse(lines.begin(), lines.end());
  vector<int> ans;
  for (int i = 0; i < W; i++) {
    int cur = i + 1;
    for (int j = 0; j < N; j++) {
      if (cur == lines[j].first) {cur = lines[j].second;}
      else if (cur == lines[j].second) {cur = lines[j].first;}
    }
    printf("%d\n", cur);
  }
  return 0;
}