#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main(){
 double x,y,a,b,c,d,e,f;
 while(cin>>a>>b>>c>>d>>e>>f){
  x=(c*e-f*b)/(a*e-d*b);
  y=(a*f-d*c)/(a*e-d*b);
  if(abs(x)<=(0.0+numeric_limits<double>::epsilon())) x = +0.00000000;
  if(abs(y)<=(0.0+numeric_limits<double>::epsilon())) y = +0.00000000;
  cout << fixed << setprecision(3) << x << " " << y << endl;
 }
 return 0;
}