#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int n;
  double x[4];
  double y[4];
  const double eps = 1.0e-12;

  scanf("%d", &n);
  while (n--) {
    for (int i=0; i<4; i++) {
      scanf("%lf %lf", &x[i], &y[i]);
    }
    if (abs((y[1]-y[0])*(x[3]-x[2]) - (x[1]-x[0])*(y[3]-y[2])) < eps) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}