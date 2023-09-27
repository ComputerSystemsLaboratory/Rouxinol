#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c,d,e,f;
	double x,y;
	double D;
	
	while ( (cin >> a) && (cin >> b) && (cin >> c) && (cin >> d) && (cin >> e) && (cin >> f) ) {
		D = a*e - b*d;
		x = (e*c - b*f) / D;  x+=0;
		y = (-d*c + a*f) / D; y+=0;

		cout << fixed << setprecision(3);
		cout << x << " " << y << endl;
	}
	
	return 0;
}