#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double g = ((c*d) - (a*f)) / ((b*d) - (a*e));
		double h = (c - (b*g)) / a;
		cout << fixed << setprecision(3) << h << " " <<g << endl;
	}
	return 0;
}