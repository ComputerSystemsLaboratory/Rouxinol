#include <cstdio>

using namespace std;

int main()
{
  double a, b, c, d, e, f;
  while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != -1){
    double y = 0, x = 0;
    double g = e * a;
    double h = f * a;
    double i = b * d;
    double j = c * d;
    double k = i - g;
    double l = j - h;
    y = l / k;
    x = (c - b*y) / a;

    printf("%.3lf %.3lf\n", x, y);
  }
  return 0;
}