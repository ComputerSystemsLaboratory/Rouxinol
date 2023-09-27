#include <iostream>
#include <cmath>

using namespace std;
const double EPS = 1e-10;

int main()
{
	double xa, ya, xb, yb, xc, yc, xd, yd;
	double AB, CD;
	int num = 0, i = 0;

	cin >> num;
	while ( i < num )
	{
		cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
		if ( fabs( ( xa - xb ) * ( yc - yd ) - ( xc - xd ) * ( ya - yb ) ) < EPS )
		{	
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

		i = i + 1;
	}

	return 0;
}