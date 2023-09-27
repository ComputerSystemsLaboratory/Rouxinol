#include <iostream>
#include <complex>
//#include <fstream>

using namespace std;

typedef complex <double> P;

#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b)) < EPS)

// OÏ (cross product) : a~b = |a||b|sinÆ
double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

int main()
{
//	cut here before submit 
//	freopen ("testcase.pt", "r", stdin);
	double x1, y1, x2, y2, x3, y3, xp, yp;

	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ){
		P a(x1, y1), b(x2, y2), c(x3, y3 ), p(xp, yp);
		
		if ( (cross (p - a, p - b ) > 0. && cross (p - b, p - c ) > 0. && cross (p - c , p - a ) > 0.)
		||   (cross (p - a, p - b ) < 0. && cross (p - b, p - c ) < 0. && cross (p - c , p - a ) < 0.) ) {
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		} // end if
	} // end loop

	return 0;
}