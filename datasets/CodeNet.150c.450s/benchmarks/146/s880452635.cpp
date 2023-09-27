#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;
double dot_product(xy_t a, xy_t b) { return (conj(a) * b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a) * b).imag(); }
xy_t projection(xy_t p, xy_t b) { return b * dot_product(p, b) / norm(b); }
int main()
{
	int n;
	double x, y;
	xy_t points[4];
	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> x >> y;
			points[i] = xy_t(x, y);
		}
		double area = cross_product(points[1] - points[0], points[3] - points[2]);
		if (abs(area) < 1e-11)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
