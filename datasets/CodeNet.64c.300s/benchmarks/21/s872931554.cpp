#include <iostream>
#include <iomanip>

int main()
{
	double a, b, c, d, e, f;
	while(std::cin >> a >> b >> c >> d >> e >> f) {
	    double A = e;
	    double B = - b;
	    double D = - d;
	    double E = a;
	    double det = a * e - b * d;
	    double x = (A * c + B * f) / det;
	    double y = (D * c + E * f) / det;
	    if ( x == 0 ) {
	        x = 0;
	    }
	    if ( y == 0 ) {
	        y = 0;
	    }
		
		std::cout << std::fixed << std::setprecision(3) << x << " " << y << std::endl;
	}
	return 0;
}