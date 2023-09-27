#include<iostream>

double cross( double x1, double y1, double x2, double y2 )
{
	return x1 * y2 - x2 * y1;
}

int main()
{
	double x[3], y[3], xp, yp;

	while( std::cin >> x[0] >> y[0] )
	{
		for( int i = 1; i != 3; ++i )
			std::cin >> x[i] >> y[i];
		std::cin >> xp >> yp;

		bool s, f = true;
		for( int i = 0; i != 3; ++i )
		{
			double t = cross( x[( i + 1 ) % 3] - x[i], y[( i + 1 ) % 3] - y[i], xp - x[i], yp - y[i] );

			if( !i )
			{
				if( t > 0 )
					s = true;
				else
					s = false;
			}

			f &= ( t < 0 ) ^ s;
		}

		if( f )
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}

	return 0;
}