#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double a, b, c, d, e, f, x, y;
  while(cin >> a >> b >> c >> d >> e >> f){
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    x = ((c * e - b * f) == 0 && (a * e - b * d) < 0) ? -x : x;
    y = ((a * f - c * d) == 0 && (a * e - b * d) < 0) ? -y : y;      
    cout << fixed << setprecision(3) << x << ' ' << y << endl;
  }
}