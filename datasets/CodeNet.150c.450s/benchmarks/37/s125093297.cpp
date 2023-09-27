#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  double a, b, c, d, e, f, x, y;
  while(cin >> a >> b >> c >> d >> e >> f){
    x=(c*e-b*f)/(a*e-d*b)+0.0001;
    y=(c*d-a*f)/(b*d-a*e)+0.0001;
    // x=round(x*1000)/1000;
    // y=round(y*1000)/1000;
    cout << fixed << setprecision(3) << x << " " << setprecision(3) << y << endl;
  }

  return 0;
}

  