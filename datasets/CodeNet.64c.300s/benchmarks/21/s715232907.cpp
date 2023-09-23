#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	double a, b, c, d, e, f;
	while (cin>>a>>b>>c>>d>>e>>f) {
		double mat = a * e - b * d;
		double dx = (c * e - b * f) / mat;
		double dy = (a * f - d * c) / mat;

		if (dx == -0.) dx = 0.;
		if (dy == -0.) dy = 0.;
		printf("%.3f %.3f\n", dx, dy);
	}
	return 0;
}