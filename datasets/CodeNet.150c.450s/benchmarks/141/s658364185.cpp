
#include <iostream>
#include <complex>
using namespace std;

double area(complex<double> a, complex<double> b, complex<double> c){
  return (conj(b-a)*(c-a)).imag()/2.0;
}

int main(){
  double x1,y1,x2,y2,x3,y3,xp,yp;
  while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
    complex<double> v[3];
    complex<double> vp;

    v[0]=complex<double>(x1,y1);
    v[1]=complex<double>(x2,y2);
    v[2]=complex<double>(x3,y3);
    vp  =complex<double>(xp,yp);

    double s[3];
    for(int j=0;j<3;j++) 
      s[j]=area(vp,v[j],v[(j+1)%3]);

    if(s[0]*s[1]>0 && s[1]*s[2]>0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}