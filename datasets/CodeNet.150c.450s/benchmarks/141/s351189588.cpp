#include <iostream>
#include <algorithm>
#include <vector>
#include <complex>

using namespace std;

typedef	complex<double> P;

double dot(P a, P b) {
  return (a.real() * b.real() + a.imag() * b.imag());
}

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}
int main(){

	double xp,yp,x1,x2,x3,y1,y2,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		P tp1(x1,y1);
		P tp2(x2,y2);
		P tp3(x3,y3);
		P p(xp,yp);
		P p1 = tp1 - p;
		P p2 = tp2 - p;
		P p3 = tp3 - p;

		double v1 = cross(p1,p2);
		double v2 = cross(p2,p3);
		double v3 = cross(p3,p1);

		if((v1>=0&&v2>=0&&v3>=0)||(v1<0&&v2<0&&v3<0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}