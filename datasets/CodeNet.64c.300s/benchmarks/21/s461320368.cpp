#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int a,b,c,d,e,f;
while (cin>>a>>b>>c>>d>>e>>f) {
 double Dx = c*e-b*f;
 double Dy = a*f-c*d;
 double D  = a*e-b*d;
 double x = Dx/D;
 double y = Dy/D;
 if (x==-0.) x=0;
 if (y==-0.) y=0;
 cout << fixed << setprecision(3) << x << ' ' << y << endl;
 }
return 0;
}