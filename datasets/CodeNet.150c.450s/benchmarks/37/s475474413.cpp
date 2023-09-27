#include <iostream>
#include <iomanip>
using namespace std;
int main( void )
{
	while ( !cin.eof() )
	{
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		if ( cin.eof() )
			break;

		double delta = 1.0 / ( a*e - b*d );

		double x = (double)( e * c - b * f ) * delta;
		double y = (double)( a * f - d * c ) * delta;

		if ( x == 0.0 )
			x = 0.0;
		if ( y == 0.0 )
			y = 0.0;

		cout << setprecision(3) << setiosflags(ios::fixed) << x << " " << y << endl;

	}

	return 0;
}