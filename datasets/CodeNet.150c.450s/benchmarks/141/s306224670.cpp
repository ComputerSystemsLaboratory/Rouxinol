#include<cmath>
#include<iostream>
using namespace std;
#define PI 3.141592

int winding_number(double x, double y, double p[][2], int n)
{
  double x1 = p[n - 1][0] - x, y1 = p[n - 1][1] - y;
  double s = 0;
  for(int i = 0; i < n; i++)
  {
    double x2 = p[i][0] - x, y2 = p[i][1] - y;
    double tx = acos((x1 * x2 + y1 * y2) / sqrt((x1 * x1 + y1 * y1) * (x2 * x2 + y2 * y2)));
    s += tx;
    x1 = x2; y1 = y2;
  }
  return (abs(s) + 0.000001) / 2 / PI;
}


double p[3][2];
int main()
{
  while(cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1] >> p[2][0] >> p[2][1])
  {
    double x, y;
    cin >> x >> y;
    cout << (winding_number(x, y, p, 3) ? "YES" : "NO") << endl;;
  }
}