#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
#include <cmath>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  int n;
  scanf("%d", &n);
  double x[4], y[4];
  const double EPS = 1e-12;
  for (int z = 0; z < n; z++) {
    for (int i = 0; i < 4; i++) {
      scanf("%lf%lf", &x[i], &y[i]);
    }
    printf("%s\n", abs((y[1]-y[0])*(x[3]-x[2])-(y[3]-y[2])*(x[1]-x[0])) < EPS ? "YES" : "NO");
  }
}