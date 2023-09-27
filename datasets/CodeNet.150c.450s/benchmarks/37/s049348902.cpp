#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
  double a, b, c, d, e, f;
  while ( cin >> a >> b >> c >> d >> e >> f )
    {
      double det = a * e - b * d;
      double x = round(((c * e - b * f) / det) * 1000) / 1000;
      double y = round(((a * f - c * d) / det) * 1000) / 1000;
      if ( abs( x ) < 0.001 ) x = 0.0;
      if ( abs( y ) < 0.001 ) y = 0.0;
      cout << fixed << setprecision(3) << x << " " << y << endl;
    }
  return 0;
}