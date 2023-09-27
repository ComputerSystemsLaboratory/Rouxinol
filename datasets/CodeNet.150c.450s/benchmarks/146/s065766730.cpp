#include <iostream>
#include <complex>
#include <algorithm>
#define EPS 1e-10
#define EQ(a,b) (abs(a - b) < EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag))
using namespace std;

typedef complex<double> P;

double cross (P a, P b) {
    return (a.real() * b.imag() - a.imag() * b.real());
}

bool is_parallel(P a1, P a2, P b1, P b2) {
    return EQ( cross(a1 - a2, b1 - b2), 0.0);
}

int main(void)
{
    int n;
    cin >> n;
    while (n--) {
	P a1, a2, b1, b2;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	a1 = P(x1, y1);
	b1 = P(x2, y2);
	a2 = P(x3, y3);
	b2 = P(x4, y4);

	if (is_parallel(a1, b1, a2, b2)) cout << "YES" << endl;
	else cout << "NO" << endl;
    }

    return 0;
}