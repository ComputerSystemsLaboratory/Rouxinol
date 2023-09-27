#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> P;

double cross(P a, P b) {
  return (a.real()*b.imag()-a.imag()*b.real());
}

P vector_coord(P a, P b, P x){
  return P(-cross(b,x),cross(a,x))/cross(a,b);
}

int main(){
  double a1,b1,a2,b2,a3,b3,x1,y1;
  while(cin >>a1 >>b1 >>a2 >>b2 >>a3>>b3>>x1>>y1){
  P o=P(a1,b1);
  P a=P(a2,b2)-o;
  P b=P(a3,b3)-o;
  P x=P(x1,y1)-o;
  P v = vector_coord(a,b,x);
  if (0<v.real()&&0<v.imag()&&v.real()+v.imag()<1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  }
  return 0;
}