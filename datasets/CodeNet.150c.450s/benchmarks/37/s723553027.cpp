#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	double a, b, c, d, e, f, x, y;
	while( cin >> a >> b >> c >> d >> e >> f ){
		x = (c*e - b*f) / (a*e - b*d);
		y = (c*d - a*f) / (b*d - a*e);
		if( fabs(x) < 0.0005 ) x = 0.0;
		if( fabs(y) < 0.0005 ) y = 0.0;
		cout << fixed << std::setprecision(3) << x << " " << y << "\n";
	}
	return 0;
}