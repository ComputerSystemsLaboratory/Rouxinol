#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-7
int main()
{
  double a, b, c, d, e, f;
  while(cin >> a >> b >> c >> d >> e >> f) {
    // x = (c - by) / a
    // x = (f - ey) / d
    double x = (c * e - f * b) / (e * a - d * b);
    // y = (c - ax) / b
    double y = (c - a * x) / b;

    bool flag = x <= -EPS;
    int xx = (int)(x * 1000.0 + 0.5 * -flag + EPS * -flag);
    bool flag2 = y <= -EPS;

    int yy = (int)(y * 1000.0 + 0.5 * -flag2 + EPS * -flag2);
    printf("%.3lf %.3lf\n", (double)xx / 1000.0 + EPS * -flag, (double)yy / 1000.0 + EPS * -flag2);
  }
}