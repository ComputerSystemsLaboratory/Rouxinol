#include <iostream>
#include <complex>
#include <cmath>

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )

using namespace std;
typedef complex<double> P;
// OÏ (cross product) : a~b = |a||b|sin¦
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}
int main(){
  double x1,y1,x2,y2,x3,y3,x4,y4;
  int n;
  P a,b;
  for(cin>>n;n>0;n--){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    a = P(x2-x1,y2-y1);
    b = P(x4-x3,y4-y3);
    if EQ(cross(a,b),0.0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}