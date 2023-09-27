#include <iostream>
#include <cmath>

using namespace std;

#define EPS (1e-9)

double cross_product( double x1, double y1,
					  double x2, double y2 )
{
	return ((x1 * y2) - (x2 * y1));
}

int main( void )
{
	int n;
	while ( cin >> n )
	{
		for (int i=0; i < n; ++i)
		{
			double x1, y1, x2, y2, x3, y3, x4, y4;
			cin >> x1 >> y1 >> x2 >> y2
				>> x3 >> y3 >> x4 >> y4;

			if (EPS > fabs(cross_product((x2-x1), (y2-y1), (x4-x3), (y4-y3))))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	
	return 0;
}