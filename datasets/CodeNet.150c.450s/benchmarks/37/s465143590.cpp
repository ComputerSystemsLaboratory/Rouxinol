#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a,b,c,d,e,f;
  float det;

  while( cin >> a >> b >> c >> d >> e >> f ) {
    det = a*e-b*d;
    float x = (c*e-f*b)/det;
    float y = (-c*d+f*a)/det;
    x = (x==-0.0)?0.0:x;  // Convert -0.0 to 0.0
    y = (y==-0.0)?0.0:y;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << x << " " << y << endl;
  }

  return 0;
}