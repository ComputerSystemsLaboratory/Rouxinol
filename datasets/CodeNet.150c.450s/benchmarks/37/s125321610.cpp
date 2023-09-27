#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
  double a, b, c, d, e, f;
  double x, y;
  cout << setprecision(3) << fixed;
    while(cin >> a >> b >> c >> d >> e >> f) {
    x=(b*f-c*e)/(b*d-a*e);
    x = round(x * 1000) / 1000.0;
    if (x == -0.0) x = 0.0;
    
    cout<<x;
    cout<<" ";
    
    y=(c*d-a*f)/(b*d-a*e);
    y = round(y * 1000) / 1000.0;
if (y == -0.0) y = 0.0;
    cout<<y;
    cout<<endl;
  }
  
  return 0;
}