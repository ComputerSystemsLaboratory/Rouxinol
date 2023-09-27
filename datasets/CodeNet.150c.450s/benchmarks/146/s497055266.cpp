#include <iostream>
#include <complex>
using namespace std;

// ?¨±?????????????????
#define EPS (1e-10)
// 2??????????????????????????????????????????
#define EQ(a,b) (abs((a)-(b)) < EPS)

double cross(complex<double> a, complex<double> b){
	return (a.real() * b.imag() - a.imag() * b.real());
}

int is_parallel(complex<double> a1, complex<double> a2, complex<double> b1, complex<double> b2){
	return EQ(cross(a1 - a2, b1 - b2), 0.0);
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	double x1, y1, x2, y2, x3, y3, x4, y4;

	while(n > 0){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		complex<double> a(x1, y1);
		complex<double> b(x2, y2);
		complex<double> c(x3, y3);
		complex<double> d(x4, y4);

		cout << (is_parallel(a, b, c, d) ? "YES" : "NO") << endl;

		--n;
	}

	return 0;
}